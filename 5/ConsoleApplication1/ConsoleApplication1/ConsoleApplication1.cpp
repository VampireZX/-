#include <iostream>
using namespace std;
int main()
{
	double N, A, B, X, Y, s1, s2;
	cin >> N >> A >> B >> X >> Y;
	
	if (B <= A)
	{
		cout << " ";
		return 0;
	}

	if (N > A && N > B)
	{
		s2 = N * (1 - Y / 100);
		cout << s2;
	}

	else if (N > A)
	{
		s1 = N * (1 - X / 100);
		cout << s1;
	}

	else if (N > B)
	{
		s2 = N * (1 - Y / 100);
		cout << s2;
	}

	else cout << N;
}

