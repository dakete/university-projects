#include <iostream>
using namespace std;
int main ()
{
    int n,i,k;
    cout << "Введите размер массива: ";
    cin >> n;
    int a[n + 1];
    for (i = 2; i <= n; i++)
    {
        a[i] = i;
    }
    for(i = 2; i <= n; i++)
    {
        if(a[i] != 0)
        {
            for(k = 2 * i; k <= n ; k += i)
            {
                a[k] = 0;
            }
            cout << a[i] << endl;
        }
    }
    return 0;
 
}
