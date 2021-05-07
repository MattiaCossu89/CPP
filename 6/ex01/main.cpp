#include "Serialize.hpp"

int main()
{
	void *s = serialize();
	Data *d = deserialize(s);
	(void)s;
	std::cout << "Deserialized:" << std::endl;
	std::cout << *(d->s1) << " -- " << (d->i) << " -- " << *(d->s2) << std::endl;
}
