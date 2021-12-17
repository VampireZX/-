#include<iostream>
#include<string>

using namespace std;

void fun(int n, char string[100]);

int main()
{
    char string[100];
    int n;

    cout << "String: ";
    gets_s(string);
    n = strlen(string);
    fun(n, string);
    cout << string;
}

void fun(int n, char string[100])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (string[i] > string[j])
            {
                char f;
                f = string[i];
                string[i] = string[j];
                string[j] = f;
            }
        }
    }
}