#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double m, c, i,  s0;
    cout << "Введите m: ";
    cin >> m;
    cout << "Введите c: ";
    cin >> c;
    cout << "Введите i: ";
    cin >> i;
    int* bar = new int[int(i) + 1];
    cout << "Какое число вам нужно ввести?" << endl;
    cout << "1. Положительное маленькое" << endl;
    cout << "2. Положительное большое" << endl;
    cout << "3. Отрицательное маленькое" << endl;
    cout << "4. Отрицательное большое" << endl;
    int x;
    cout << "Введите номер нужного вам варианта: ";
    cin >> x;
    switch (x)
    {
    case 1:
        srand(time(NULL));
        s0 = rand() % 2;
        bar[0] = s0;
        for (int j = 0; j < i; j++)
        {
            bar[j + 1] = int((m * bar[j] + j)) % int(c);
            cout << j << " элемент = " << bar[j + 1] << endl;
        }
        break;
    case 2:
        srand(time(NULL));
        s0 = rand() % 100000000000 + 1;
        bar[0] = s0;
        for (int j = 0; j < i; j++)
        {
            bar[j + 1] = int((m * bar[j] + j)) % int(c);
            cout << j << " элемент = " << bar[j + 1] << endl;
        }
        break;
    case 3:
        srand(time(NULL));
        s0 = -(rand() % 2);
        bar[0] = s0;
        for (int j = 0; j < i; j++)
        {
            bar[j + 1] = int((m * bar[j] + j)) % int(c);
            cout << j << " элемент = " << bar[j + 1] << endl;
        }
        break;
    case 4:
        srand(time(NULL));
        s0 = -(rand() % 100000000000 + 1);
        bar[0] = s0;
        for (int j = 0; j < i; j++)
        {
            bar[j + 1] = int((m * bar[j] + j)) % int(c);
            cout << j << " элемент = " << bar[j + 1] << endl;
        }
        break;
    }
}

