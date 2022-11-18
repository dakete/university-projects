#include <iostream>
#include <vector>
using namespace std;
int vern = 0;
void perestanovka(vector<int> mas, int n)
{
    int kolvo = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i == mas[i - 1])
        {
            kolvo++;
            break;
        }
    }
    if (kolvo > 0)
    {
        vern++;
    }
}
void cold(vector<int> mas, int n)
{
    do
    {
        perestanovka(mas, n);
    }
    while (next_permutation(mas.begin(), mas.end()));
}
int main()
{
    int n;
    vector<int> mas;
    cout << "Введите число шариков >> " << endl;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        mas.push_back(i + 1);
    }
    cold( mas, n);
    cout << vern << endl;
}
