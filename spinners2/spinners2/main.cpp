#include<iostream>
using namespace std;
int main()
{
    int M, ch = 0, tr = 0;
    cout << "Введите число лопастей: " << endl;
    cin >> M;
    switch (M)
    {
    case 5:
            cout << "Спиннеры: " << endl;
            cout << "3ных: " << tr << endl;
            cout << "4ных: " << ch << endl;
        break;
    case 3:
            cout << "Спиннеры: " << endl;
            cout << "3ных: " << tr + 1 << endl;
            cout << "4ных: " << ch << endl;
        break;
    case 4:
            cout << "Спиннеры: " << endl;
            cout << "3ных: " << tr << endl;
            cout << "4ных: " << ch + 1 << endl;
        break;
    default:
            cout << "Невозможно." << endl;
    }
    if (M % 3 == 0 and M > 3)
    {
        cout << "Спиннеры: " << endl;
        cout << "3ных: " << M / 3 << endl;
        cout << "4ных: " << ch << endl;
    }
    if (M % 3 != 0 and M > 4)
    {
        while (M % 4 != 0)
        {
            M -= 3;
            tr++;
        }
        cout << "3ных: " << tr << endl;
        cout << "4ных: " << M / 4 << endl;
    }
}

