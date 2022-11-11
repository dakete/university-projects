#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int N, M, kl = 0, kl1 = 0;
    cout << "Введите размер >> " << endl;
    cout << "Ширина: ";
    cin >> N;
    cout << "Длина: ";
    cin >> M;
    if (M == N)
    {
        for (int i = 1; i <= M; i++)
        {
            kl += i;
        }
        cout << "Всего вариантов: " << kl * kl << endl;
    }
    else
    {
        for (int i = 1; i <= N; i++)
        {
            kl += i;
        }
        for (int i = 1; i <= M; i++)
        {
            kl1 += i;
        }
        cout<< "Всего вариантов: " << kl * kl1 << endl;
    }
}

