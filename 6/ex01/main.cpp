#include <iostream>
#include <sstream>
#include <string>

typedef struct Data_s
{
	std::string *s1;
	int i;
	std::string *s2;
	Data_s()
	{
		s1 = 0;
		i = 0;
		s2 = 0;
	}
	Data_s(std::string *s1_, int i_, std::string *s2_)
	{
		s1 = s1_;
		i = i_;
		s2 = s2_;
	};
}				Data;

void *serialize()
{
	std::string *s1;
	int in;
	std::string *s2;
	s1 = new std::string("ciao");
	in = (1);
	s2 = new std::string("come");
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

int main()
{
	void *s = serialize();
	Data *d = deserialize(s);
	(void)s;
	std::cout << *(d->s1) << " " << (d->i) << " " << *(d->s2) << std::endl;
}
