#include "Serialize.hpp"


void *serialize()
{
	srand(time(NULL));
	int in;
	int r = rand() % 40;
	std::string *s1 = new std::string();
	std::string *s2 = new std::string();
	std::string words = "abcdefghilmnopqrstuvzxwyjkABCDEFGHILMNOPQRSTUVZWXYJK";
	for (int i = 0; i < r; i++)
		s1->append(words.substr(rand() % 52, 1));
	r = rand() % 40;
	for (int i = 0; i < r; i++)
		s2->append(words.substr(rand() % 52, 1));
	in = rand() % 100000000;
	std::cout << "to serialize: \n" << *s1 << " -- " << in << " -- " << *s2 << std::endl;
	unsigned char *raw = new unsigned char[sizeof(s1) + sizeof(in) + sizeof(s2) + 1];
	for (size_t i = 0; i<sizeof(s1) + sizeof(in) + sizeof(s2); i++)
		raw[i] = 0;
	for (size_t i = 0; i < sizeof(s1); i++)
		raw[i] = (reinterpret_cast<unsigned char *>(&s1))[i];
	for (size_t i = 0; i < sizeof(in); i++)
		raw[i + sizeof(s1)] = (reinterpret_cast<unsigned char *>(&in))[i];
	for (size_t i = 0; i < sizeof(s2); i++)
		raw[i + sizeof(s1) + sizeof(in)] = (reinterpret_cast<unsigned char *>(&s2))[i];
	return (raw);
}

Data *deserialize(void *raw)
{
	Data *data = new Data();
	size_t *real_ = reinterpret_cast<size_t *>(raw);
	std::string *s1 = reinterpret_cast<std::string *>(*real_);
	std::cout << (void *)real_ << std::endl;
	int i = *reinterpret_cast<int *>((real_ + sizeof(s1) / sizeof(size_t)));
	real_ = reinterpret_cast<size_t *>(reinterpret_cast<unsigned char *>(real_) + sizeof(s1) + sizeof(i));
	std::string *s2 = reinterpret_cast<std::string *>(*real_ );
	data->s1 = s1;
	data->i = i;
	data->s2 = s2;
	return (data);
}
