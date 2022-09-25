#include <iostream>
#include <vector>
using namespace std;

void Reverse(vector<int>& v) 
{
	int t;
	for (int i = 0; i < v.size() / 2; i++) {
		t = v[i];
		v[i] = v[v.size() - 1 - i];
		v[v.size() - 1 - i] = t;
	}
}

int main() 
{
	vector<int> nums = { 3,2,3,4,5 };
	Reverse(nums);
	for (auto i : nums)
		cout << i << endl;
}