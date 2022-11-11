#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
int main()
{
    ifstream File;
    string stroka;
    File.open("/Users/dakete/Documents/GitHub/university-projects/dz 5.22(stat)/test.txt");
    string b = "eyuioa";
    int e = 0, y = 0, u = 0, i = 0, o = 0, a = 0;
    if (File.is_open())
    {
        cout << "Файл открыт." << endl;
    }
    while (getline(File, stroka))
    {
        cout << stroka << endl;
    }
        for (auto el: stroka)
        {
            if (el == 'e')
            {
                e += 1;
            }
            else if (el == 'y')
            {
                y += 1;
            }
            else if (el == 'u')
            {
                u += 1;
            }
            else if (el == 'i')
            {
                i += 1;
            }
            else if (el == 'o')
            {
                o += 1;
            }
            else if (el == 'a')
            {
                a += 1;
            }

        }
    if (a == 0)
    {
        a = pow(10, 9);
    }
    if (y == 0)
    {
        y = pow(10, 9);
    }
    if (u == 0)
    {
        u = pow(10, 9);
    }
    if (i == 0)
    {
        i = pow(10, 9);
    }
    if (o == 0)
    {
        o = pow(10, 9);
    }
    if (e == 0)
    {
        e = pow(10, 9);
    }
    
    
    
    
    if (e <= y and e <= u and e  <= i and e <= o and e <= a)
    {
        cout << "e (" << e << ")" << endl;
    }
    if (y <= e and y <= u and y <= i and y <= o and y <= a)
    {
        cout << "y (" << y << ")" << endl;
    }
    if (u <= y and u <= e and u <= i and u <= o and u <= a)
    {
        cout << "u (" << u << ")" << endl;
    }
    if (i <= y and i <= u and i <= e and i <= o and i <= a)
    {
        cout << "i (" << i << ")" << endl;
    }
    if (o <= y and o <= u and o <= i and o <= e and o <= a)
    {
        cout << "o (" << o << ")" << endl;
    }
    if (a <= y and a <= u and a <= i and a <= o and a <= e)
    {
        cout << "a (" << a << ")" << endl;
    }
}
