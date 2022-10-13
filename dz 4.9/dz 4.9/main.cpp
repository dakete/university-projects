#include<iostream>
#include<string>
#include <math.h>
using namespace std;
int fun_alf(char x)
{
    string alfavit= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int k = 0; k < alfavit.length(); k++)
    {
        if (alfavit[k] == x)
        {
            return 55;
            break;
        }
    }
    return 48;
}
int f1(string x, int ss1)
{
    int sum = 0;
    for (int j = 0; j < x.length(); j++)
    {
        sum += pow(ss1, x.length() - 1 - j) * (int(x[j]) - fun_alf(x[j]));
    }
    return sum;
}
string f2(int sum, int ss2)
{
    string x = "";
    while (sum > 0)
    {
        if (sum % ss2 >= 10)
        {
            x += char((sum % ss2) + 55);
        }
        else
        {
            x += to_string(sum % ss2);
        }
        sum /= ss2;
    }
    return x;
}
int main()
{
    string chislo;
    string f;
    int ss1, ss2, k = 0, d = 0;
    cout << "Введите число: ";
    getline(cin, chislo);
    if (chislo[0] == '-')
    {
        d += 1;
        chislo.erase(0, 1); //удаляем с первой  позиции число
    }
    if (chislo[0] != '0')
    {
        cout << "Введите СС данного числа: ";
        cin >> ss1;
            for (int i = 0; i < chislo.length(); i++)
            {
                if (int(chislo[i]) - fun_alf(chislo[i]) >= ss1)
                {
                    k += 1;
                    break;
                }
            }
            if (k == 0)
            {
                cout << "Введите СС в которую нужно перевести числo: ";
                cin >> ss2;
                int v10 = 0;
                v10 = f1(chislo, ss1);
                auto(itog) = f2(v10, ss2);
                if (d > 0)
                {
                    cout << '-';
                }
                for (int f = itog.length(); f >= 0; f--)
                {
                    cout << itog[f];
                }
                cout << endl;
            }
            else
            {
                cout << "ошибка." << endl;
            }
    }
    else
    {
        cout << "ошибка." << endl;
    }
}

