#include <iostream>

using namespace std;

bool IsPalindrom(string a)
{
	int b = a.size();
	int k = 0;

	for (int i = 0; i < a.size(); i++)
	{		
		int c = 0;

		if (a[i] == a[b - i - 1])
		{
			c++; k++;
		}

		if (c != 0) 
		{
			continue;
		}

		else 
		{
			break;
		}
	}
	
	if (k == a.size())
		return true;
	else return false;

}


int main()
{
	string a;
	cin >> a;
	cout << IsPalindrom(a);
}