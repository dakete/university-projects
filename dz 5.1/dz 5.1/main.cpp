#include <iostream>
using namespace std;
int evklid(int a, int b)
{
    while (a != 0 and b != 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
            b = b % a;
    }
    return (a + b);
}

int main()
{
    int a, b;
    cout << "Введите два целых числа: ";
    cin >> a >> b;
    cout << evklid(a, b) << endl;
}
