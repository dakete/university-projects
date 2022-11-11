#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    string k;
    string d5 = "";
    cout << "Введите размер массива: ";
    cin >> n;
    string mas[n];
    string b= "";
    for (int i = 0; i < n; i++)
    {
        cout << "Введите число в массив: ";
        cin >> k;
        mas[i] = k;
    }
    string dvo[n];
    for (int i = 0; i < n; i++)
    {
        int d10 = 0;
        string a = mas[i];
        for (int m = 0; m < a.size(); m++)
        {
            b = a[m] + b;
        }
        for (int j = 0; j < b.size(); j++)
        {
            d10 = (d10 + (int (b[j] - 48)) * (pow(2, j)));
        
        }
        while (d10 > 0)
        {
            d5 = to_string(d10 % 5) + d5;
            d10 = d10 / 5;
        }
        dvo[i] = d5;
        d5 = "";
        b = "";
    }
    for (int t = 0; t < n; t++)
    {
        cout << dvo[t] << endl;
    }
    
    
    
    
    
}
