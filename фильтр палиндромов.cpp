#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool IsPalindrome(string words1) 
{
	int vlenght = words1.size();
	for (int i = 0; i < vlenght/2; i++)
	{
		if (words1[i] != words1[vlenght - 1 - i])
			return false;
		
	}
	return true;
}

vector<string> PalindromeFilter(vector<string> words, int minLength)
{
	int vlength = words.size();
	vector<string> l(vlength);
	for (int i = 0; i < vlength; i++)
	{
		if (IsPalindrome(words[i]))
			if (words[i].size() >= minLength)
				l[i] = words[i];
	}
	return l;
}