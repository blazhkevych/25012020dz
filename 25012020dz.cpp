/*
уравнение, формула
*/
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	double a, b, x, y;
	cout << "Введите a: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	cout << "Введите x: ";
	cin >> x;
	if (pow(b, 2) > a * x)
		y = exp(sin(x)) + b * sqrt(2 * cos(6 * x - 0.3));
	else if ((pow(b, 2) <= a * x))
		y = exp(-x) + sqrt(tan(abs(3 * x + 0.6)));
	cout << "y = " << y << endl;
	return 0;
}
