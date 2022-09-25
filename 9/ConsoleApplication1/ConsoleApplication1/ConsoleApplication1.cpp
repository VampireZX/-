#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
    int N;
    vector<int> bin;
    cin >> N;
    
    for (int j = 0; N > 0; j++)
    {
        bin.push_back(N % 2);
        N /= 2;
    }

    for (int j = bin.size()-1; j>=0; j--)
    {
        cout << bin[j] << "";
    }
    
}