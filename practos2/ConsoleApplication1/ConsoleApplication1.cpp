#include <iostream>
using namespace std;

double min(double a, double b, double c) 
{
	if (a < b && a < c)
	{
		return a;
	}

	else if (b < a && b < c) 
	{
		return b;
	}

	else if (c < a && c < b) 
	{
		return c;
	}
}

int main()
{
	setlocale(LC_ALL, "ru");

	double x, y, z, f, a, b, c;
	cout << "Введите три числа: ";
	cin >> x >> y >> z;
	a = x - 1;
	b = y - 1;
	c = x + y + z;
	f = min(a, y, z) + min(x, b, c);
	cout << "Min(x-1,y,z) + Min(x,y-1,x+y+z) = " << f;
}