#include <iostream>
using namespace std;
string str = "IVXLCDM";

int rimc(char a)
{
    switch (a)
    {
    case 'I':
        return 1;
        break;
    case 'V':
        return 5;
        break;
    case 'X':
        return 10;
        break;
    case 'L':
        return 50;
        break;
    case 'C':
        return 100;
        break;
    case 'D':
        return 500;
        break;
    case 'M':
        return 1000;
        break;
    default:
        return 0;
        break;
    }



}

int index(char a)
{
    int ind = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (a == str[i])
        {
            ind = i;
        }
    }
    return ind;
}


int main()
{
    while (1)
    {
        string x;
        cin >> x;
        for (int i = 0; i < x.length(); i++)
        {
            //проверка на повторение более трех раз
            if (x[i] == x[i + 1] && x[i + 1] == x[i + 2] && x[i + 2] == x[i + 3])
            {
                cout << "Введена некорректная запись числа!"  << endl;
                return 0;
            }
             //проверка на повторение V, L, D
            else if ((x[i] == 'V' && x[i + 1] == 'V') || (x[i] == 'L' && x[i + 1] == 'L') || (x[i] == 'D' && x[i + 1] == 'D'))
            {
                cout << "Введена некорректная запись числа!" << endl;
                return 0;
            }
             //проверка на повторение меньшей цифры перед большей более одного раза
            int valuetekuch = (x[i]), colvo = 0, j = i + 1;
            while (rimc(x[j]) >= valuetekuch && j < x.length())
            {
                j++;
                colvo++;
            }
            if (colvo > 0 && rimc(x[j]) > valuetekuch)
            {
                cout << "Введена некорректная запись числа!" << endl;
                return 0;
            }
           //проверка на запись меньшая.большая.та же меньшая цифра
            if (rimc(x[i]) < rimc(x[i + 1]) && x[i] == x[i + 2])
            {
                cout << "Введена некорректная запись числа!" << endl;
                return 0;
            }
             //проверка на некорректные меньшие числа перед большими
            if (rimc(x[i]) < rimc(x[i + 1]) && !(x[i] == 'I' || x[i] == 'X' || x[i] == 'C'))
            {
                cout << "Введена некорректная запись числа!" << endl;
                return 0;
            }

        }

        int var, minvychit = 10000, indexmin = 0;
        int i = 0, num = 0;

        while (i < x.length())
        {
            var = rimc(x[i]);

            if (var == -1)
            {
                cout << "В записи числа использованы недопустимые символы"<< endl;
                num = 0;
                break;
            }

            if (i == x.length() - 1 || index(x[i]) >= index(x[i + 1]))
            {
                if (var > minvychit && indexmin < i - 1)
                {
                    cout << "Введена некорректная запись числа!" << endl;
                    return 0;
                }
                num += var;
                i++;
            }
            else
            {
                if (var < minvychit)
                {
                    minvychit = var;
                    indexmin = i;
                }
                num -= var;
                i++;
            }
        }

        if (num != 0)
        {
            cout << x << " = " << num << endl;
        }
    }
return 0;
}
