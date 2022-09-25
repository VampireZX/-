#include <iostream>
#include <vector>
#include <string>
using namespace std;

void COME(string op, vector<int>& q)
{
	int new_size;
	int nums;
	if (op == "COME")
	{
		cin >> nums;
		if (nums > 0)
			for (int i = 0; i < nums; i++)
				q.push_back(0);
		else
		{
			new_size = q.size() + nums;
			q.resize(new_size);
		}
	}
}

void WORRY(string op, vector<int>& q)
{
	int l;
	if (op == "WORRY")
	{
		cin >> l;
		q[l] = 1;
	}
}

void QUIET(string op, vector<int>& q)
{
	if (op == "QUIET")
		for (int i = 0; i < q.size(); i++)
			if (q[i] == 1)
				q[i] = 0;
}

int WORRY_COUNT(string op, vector<int> q, int& count)
{
	if (op == "WORRY_COUNT")
	{
		for (auto i : q)
			if (i == 1) {
				count++;
			}
		return count;
	}
}

int main()
{
	int Q;
	string operation;
	vector<int> queue;
	vector<int> result;
	int counter = 0;
	cin >> Q;
	for (int i = 0; i < Q; i++)
	{
		cin >> operation;
		COME(operation, queue);
		WORRY(operation, queue);
		QUIET(operation, queue);
		if (operation == "WORRY_COUNT") {
			result.push_back(WORRY_COUNT(operation, queue, counter));
			counter = 0;
		}
	}
	for (auto i : result)
		cout << i << endl;
}