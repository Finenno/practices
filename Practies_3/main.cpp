#include <iostream>
#include "eq2.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	double a, b, c;
	cin >> a >> b >> c;
	eq2 exmpl(a, b, c);
	exmpl.find_X();
	cout << exmpl.find_Y(x);
	return 0;
}
