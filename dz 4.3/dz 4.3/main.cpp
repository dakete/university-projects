#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    char n;
    cout << "Введите тип фигуры : ";
    cin >> n;
    switch (n)
    {
        case 'P':
            cout << "Выбран прямоугольник" << endl;
            float a, b;
            cout << "Введите размеры: " << endl;
            cin >> a >> b;
            cout << "S = " << a * b << endl;
            break;
        case 'T':
            cout << "Выбран треугольник" << endl;
            float c, d;
            cout << "Введите размеры: " << endl;
            cin >> c >> d;
            cout << "S = " << ((c * d) / 2) << endl;
            break;
        case 'O':
            cout << "Выбрана окружность" << endl;
            float e;
            cout << "Введите размер радиуса: " << endl;
            cin >> e;
            cout << "S = " << (pow(e, 2) * M_PI) << endl;
            break;

        default:
            cout << "Введены некорректные данные. " << endl;
            break;
    }
}
