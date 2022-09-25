#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, x1, x2, D;
    cin >> a >> b >> c;
    
        if (a == 0 && b == 0 && c == 0)
        {
            cout << "error";
            return 0;
        }
        
        D = b * b - 4 * a * c;



        if (D == 0)
        {
            if (a == 0 && b == 0)
            {
                cout << " ";
            }
            else if (b == 0 && c == 0)
            {
                x1 = x2 = 0;
                cout << x1;
            }
            else
            {
                x1 = x2 = -b / (2 * a);
                cout << x1;
            }
        }
        else if (D < 0)
            cout << " ";
        else
        {

            if (a != 0) 
            {
                x1 = (-b - sqrt(D)) / (2 * a);
                x2 = (-b + sqrt(D)) / (2 * a);
                cout << x1 << " " << x2;
            }
            else
            {
                x1 = x2 = -c / b;
                cout << x1;
            }

        }
        return 0;

}
