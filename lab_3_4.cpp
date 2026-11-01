// lab_3_4.cpp 
// Кузьмич Максим 
// Лабораторна робота № 3_4
// Розгалуження задане плоскою фігурою
// Варіант 27

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double R; 
    double x; 
    double y;

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;

    if ((pow(x + R, 2) + pow(y - R, 2) <= pow(R, 2)) || (x >= 0 && x <= 2 * R && y >= -R && y <= 0))
    {
        cout << "yes !" << endl;
    }
    else
    {
        cout << "no !";
}

