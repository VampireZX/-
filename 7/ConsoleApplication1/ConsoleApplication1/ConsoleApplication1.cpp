#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	int t = 0, place = 0;
	cin >> a;
	
	for (int i = 0; i < a.size(); i++)
	{

		if (a[i] == 'f')
		{

			t = i;
			for (i = t + 1; i < a.size(); i++)
			{
				place = i;
				if (a[i] == 'f')
				{
					cout << place;
					return 0;
				}
			}
		}
	}
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == 'f')
		{
			cout << "-1";
			return 0;
		}
	}
	
	cout << "-2";
	return 0;

}
