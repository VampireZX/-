#include <iostream>
#include <vector>
using namespace std;

void MoveStrings(vector<string>& source, vector<string>& destination) 
{
	for (auto i : source) 
		destination.push_back(i);
	source.clear();
}

int main() 
{
	vector<string> a = { "a", "b", "c" };
	vector<string> b = { "z" };
	MoveStrings(a, b);
	for (auto i : a)
		cout << i << " ";
	cout << endl;
	for (auto j : b)
		cout << j << " ";
	cout << endl;
}
