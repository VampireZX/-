#include <iostream>

using namespace std;
int main()
{
    int N;
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
           /* if (i + j != N - 1)
            {*/
                if (arr[i][j] < 0)
                    sum += arr[i][j];
          /*  }*/
        }
    }

    cout << sum;

    for (int i = 0; i < N; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}
