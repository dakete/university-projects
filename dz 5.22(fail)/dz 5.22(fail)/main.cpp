#include <iostream>
using namespace std;
int main()
{
    int kolvoBr[5] = {0,0,0,0,0};
    int kolvoSr[5] = {0,0,0,0,0};
    int kolvoZl[5] = {0,0,0,0,0};
    int rez[5]= {0,0,0,0,0};
    string stran[5] = {"Россия","Германия","США","Англия","Китай"};
    for (int i = 0; i < 5; i++)
    {
        cout << "Количество брозновых медалей: " << stran[i]<<" = ";
        cin >> kolvoBr[i];
        rez[i] = rez[i] + kolvoBr[i] * 5;
        cout << "Количество серебряных медалей: " << stran[i]<<" = ";
        cin >> kolvoSr[i];
        rez[i] = rez[i] + kolvoSr[i] * 6;
        cout << "Количество золотых медалей: " << stran[i]<<" = ";
        cin >> kolvoZl[i];
        rez[i] = rez[i] + kolvoZl[i] * 7;
    }
    cout << "| Страна | Очки | Кол-во медалей |" << endl;
    for (int i = 0; i < 5; i++)
    {
        
        cout << "| " << stran[i] << " | " << rez[i] << " | ";
        cout << kolvoBr[i] + kolvoSr[i] + kolvoZl[i] << " | " << endl;
    }
    return 0;
}
