#include <iostream>
#include <vector>
using namespace std;

vector<int> Reversed(const vector<int>& v) 
{
	vector<int>res;
	for (int i = 0; i < v.size(); i++)
		res.push_back(v[v.size()-1-i]);
	return res;
}

int main()
{
	vector<int> nums = { 1,2,3,4,5 };
	
	for (auto i : Reversed(nums))
		cout << i << " ";
}