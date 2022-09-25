#include <iostream>
using namespace std;
int main()
{
	long long a, b, c;
	cin >> a >> b;
	if (b == 0)
	{
		cout << "Impossible";

	}
	else {
		if (a < 0 || b < 0)
			cout << " ";
		else if (a > 1000000 || b > 1000000)
			cout << " ";
		else {
			c = a / b;
			cout << c;
		}
	}
}
