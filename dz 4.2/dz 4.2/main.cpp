#include <iostream>
using namespace std;
double znak(float x)
{
    if (x == 0)
    {
        return 0;
    }
    else if (x > 0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int main()
{
    float x;
    cout << "Введите значение X: " << endl;
    cin >> x;
    cout << znak(x) << endl;
}
