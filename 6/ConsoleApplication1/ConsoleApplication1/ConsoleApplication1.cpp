#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    if (a > b)
    {
        cout << "error1";
        return 0;
    }

    if (a < 1 || b>30000)
    {
        cout << "error2";
        return 0;
    }

    for (int i = a; i <= b; ++i)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }

}