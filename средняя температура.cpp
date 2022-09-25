#include <iostream>
#include <vector>
using namespace std;

int average(const vector<int>& v) 
{
	int sum = 0;
	for (int i = 0; i < v.size(); i++)
		sum += v[i];
	return sum / (v.size());
}

int main()
{
	int N;
	cin >> N;
	vector<int> temperatures(N);
	vector<int> res;
	for (auto& i : temperatures)
		cin >> i;
	int k = 0; 
	for (int j = 0; j < N; j++)
	{
		if (temperatures[j] > average(temperatures))
		{
			res.push_back(j);
			k++;
		}
	}
	cout << k << endl;
	for (auto i : res)
		cout << i << " ";
}