#include <iostream>
using namespace std;
int main()

{
    int A, B, C;
    cout << "Введите стоимость основания спиннера: " << endl;
    cin >> A;
    cout << "Введите стоимость одной лопасти спиннера: " << endl;
    cin >> B;
    cout << "Введите максимальную цену спиннера: " << endl;
    cin >> C;
    if (A > C or B > C)
    {
        cout << "нельзя купить спиннер." << endl;
    }
    else {
        cout <<"максимальное число лопостей: "<< (C - A) / B << endl;
    }
}
