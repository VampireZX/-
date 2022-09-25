#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    int N;
    cout << "Введите размер массива: ";
    cin >> N;
    int* arr = new int[N];
    
    int l;
    cout << "Выберите, каким образом будет заполняться массив: \n1)Вручную\n2)Случайно" << endl;
    cin >> l;
    switch (l)
    {
    case 1:

        for (int i = 0; i < N; i++)
        {
            cout << "Введите " << i + 1 << "-й " << "элемент массива;" << endl;
            cin >> arr[i];
        }

        break;
    case 2:

        for (int i = 0; i < N; i++)
        {
            arr[i] = -5 + rand() % 11;
        }

        break;
    default:
        cout << "Error!";
        return 0;
        break;
    }
    
    cout << endl;

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    int min = 0, k = 0;

    for (int i = 0; i < N; i++)
    {
        
        if (arr[i] > 0)
        {
            if (arr[k] >= arr[i])
            {
                min = arr[i];
                k = i;
            }
        }
        else 
        {
            k++;
        }
    }

    if (min == 0)
        cout << "Положительные числа отсутсвуют" << endl;
    cout << min;
    
    delete[] arr;
}
