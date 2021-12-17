#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

void zapolnenie(int i, int j, int n, int** arr);
void vivod(int i, int j, int n, int** arr);

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));

    int n, k = 0, i = 0, j = 0;

    cout << "Введите размер квадратной матрицы: ";
    cin >> n;
    int** arr = new int* [n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i] = new int[n];
        }
    }

    zapolnenie(i, j, n, arr);
    vivod(i, j, n, arr);

    for (int j = 0; j < n; j++)
    {
        int max = 0;
        for (int i = 1; i < n; i++)
        {
            if (fabs(arr[i][j]) > fabs(arr[max][j]))
                max = i;
            for (int k = 0; k < n; k++)
            {
                int f = arr[max][k];
                arr[max][k] = arr[j][k];
                arr[j][k] = f;
            }
        }
    }
    cout << endl;

    vivod(i, j, n, arr);

}

void vivod(int i, int j, int n, int **arr) {
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void zapolnenie(int i, int j, int n, int** arr)
{    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }
}