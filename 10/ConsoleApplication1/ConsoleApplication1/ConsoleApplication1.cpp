#include <iostream>
using namespace std;

int Factorial(int a) 
{
	if (a < 0) return 1;
	else if (a == 0) return 1;
	else return a * Factorial(a - 1);
}

int main()
{
	int a;
	cin >> a;

	if (a > 10)
		return 0;
	cout << Factorial(a);
}
