#include <iostream>
#include <cmath>
using namespace std;

	

int main()
{
	setlocale(LC_ALL, "ru");
	
	double m, n;
	cout << "Введите два числа(=>10)" << endl;
	cin >> m >> n;
	while (n <= 9 || m <= 9)
	{
		cout << "Введите корректные значения: " << endl;
		cin >> m >> n;
	}

	for (double i = 1; i <= n; i++)
	{
		for (double j = 1; j <= m; j++)
		{
			double l = pow(sin(i), 2) + sin(j * j);
			if (l > 0.9)
			{
				cout << i << "\t";
				cout << j << endl;
			}
		}

	}
	
	
}
