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
    int* arr = new int[int(i) + 1];
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
        srand(time(NULL)); /* данная строка создает базу генерируемых чисел, srand позволяет генерировать, time время с запуска проги, NULL обновляет каждое время число */
        s0 = rand() % 2;
        arr[0] = s0;
        for (int j = 0; j < i; j++)
        {
            arr[j + 1] = int((m * arr[j] + j)) % int(c);
            cout << j << " элемент = " << arr[j + 1] << endl;
        }
        break;
    case 2:
        srand(time(NULL));
        s0 = rand() % 100000000000 + 1;
        arr[0] = s0;
        for (int j = 0; j < i; j++)
        {
            arr[j + 1] = int((m * arr[j] + j)) % int(c);
            cout << j << " элемент = " << arr[j + 1] << endl;
        }
        break;
    case 3:
        srand(time(NULL));
        s0 = -(rand() % 2);
        arr[0] = s0;
        for (int j = 0; j < i; j++)
        {
            arr[j + 1] = int((m * arr[j] + j)) % int(c);
            cout << j << " элемент = " << arr[j + 1] << endl;
        }
        break;
    case 4:
        srand(time(NULL));
        s0 = -(rand() % 100000000000 + 1);
        arr[0] = s0;
        for (int j = 0; j < i; j++)
        {
            arr[j + 1] = int((m * arr[j] + j)) % int(c);
            cout << j << " элемент = " << arr[j + 1] << endl;
        }
        break;
    }
}

