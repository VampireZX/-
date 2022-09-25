#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Input size of ur array: " << endl;
    cin >> N;

    int** arr = new int* [N];
    for (int i = 0; i < N; i++)
    {
        arr[i] = new int[N];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i + j != N - 1)
                sum+=arr[i][j];
        }
    }

    cout << sum<<"\n";

    int max = 0;
    int k, m;
    int f = arr[N - 1][N - 1];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                k = i;
                m = j;


            }
        }
    }
    arr[N - 1][N - 1] = max;
    arr[k][m] = f;

    cout << "\n";

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }

}

