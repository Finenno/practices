#include "bay.h"

void Bay::setName(string N)
{
	name = N;
}
void Bay::setDeep(float D)
{
	deep = D;
}
void Bay::setSize(float S)
{
	size = S;
}

ostream& operator<<(ostream& out, Bay obj)
{
	out << obj.name << " залив; ";
	out << "глубина: " << obj.deep << "м; ";
	out << "размер: " << obj.size << "км";
	return out;
}