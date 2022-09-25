#include <iostream>
using namespace std;

void UpdateIfGreater(int first, int& second) 
{
	int t;
	if (first > second) {
		t = second;
		second = first;
	}
}