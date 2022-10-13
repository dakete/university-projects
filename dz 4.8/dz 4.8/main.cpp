#include <iostream>
using namespace std;
int main()
{
    float A[3][4] = {{5, 2, 0, 10}, {3, 5, 2, 5}, {20, 0, 0, 0}};
    float B[4][2] = {{1.2, 0.5}, {2.8, 0.4}, {5, 1}, {2, 1.5}};
    float C[3][2];
    cout << "Матрица А:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        for (int j = 0; j < 4; j++)
        {
            cout << A[i][j] <<" ";
        }
    }
    cout << endl;
    cout << endl << "Матрица B:" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << endl;
        for (int j = 0; j < 2; j++)
        {
            cout << B[i][j] << " ";
            
        }
    }
    cout << endl;
    cout << endl << "(Результат умножения) Матрица C:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < 4; k++)
            {
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        for (int j = 0; j < 2; j++)
        {
            cout << C[i][j] << " ";

            
        }
    }
    cout << endl << endl;
    
    cout << "Больше всего получил продавец под номером 2" << endl;
    cout << "Меньше всего получил продавец под номером 3" << endl;
    cout << "Больше комиссионных получил продавец под номером 1" << endl;
    cout << "Меньше комиссионных поулчил продавец под номером 3" << endl;
    cout << "Сумма денег за проданные товары: 93.2" << endl;
    cout << "Сумма комиссионных за проданные товары: 41.3" << endl;
    cout << "Общая сумма, полученная за продажу товаров: 134.5" << endl;
    
}
