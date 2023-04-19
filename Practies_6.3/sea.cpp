#include "sea.h"

void Sea::setName(string N)
{
	name = N;
}
void Sea::setDeep(float D)
{
	deep = D;
}
void Sea::setSize(float S)
{
	size = S;
}

ostream& operator<<(ostream& stream, Sea obj)
{
	stream << obj.name << " море; ";
	stream << "глубина: " << obj.deep << "м; ";
	stream << "площадь: " << obj.size << "км";
	return stream;
}