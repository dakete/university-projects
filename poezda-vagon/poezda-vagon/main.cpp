#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int Vagon[3][18];
    Vagon[0][0] = 1;
    Vagon[1][0] = 2;
    Vagon[2][0] = 53;
    Vagon[2][1] = 54;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 1; j < 18; j++)
        {
            if (i == 0)
            {
                Vagon[i][j] = Vagon[i][j - 1] + 2;
            }
            else if (i == 1)
            {
                Vagon[i][j] = Vagon[i][j - 1] + 2;
            }
            else if (i == 2)
            {
                if (j != 1)
                {
                    if (j % 2 != 0)
                    {
                        
                        Vagon[i][j] = Vagon[i][j - 2] - 2;
    
                    }
                    else
                    {
                        Vagon[i][j] = Vagon[i][j - 2] - 2;
                    }
                }
            }
        }
    }
    int n, num, k = 0;
    cout << "Введите количество свободных мест >> ";
    cin >> n;
    vector<int> vec;
    cout << "Введите свободные места: " << endl;
    while (k < n)
    {
        cin >> num;
        vec.push_back(num);
        k++;
    }
    sort(vec.begin(), vec.end());
    int l = 0;
    int Kolvo = 0;
    string MaxKolvo = "";
    for (int k = 0; k < 9; k++)
    {
        Kolvo = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = l; j < 2 + l; j++)
            {
                if (find(vec.begin(), vec.end(), Vagon[i][j]) != vec.end())
                {
                    Kolvo++;
                }
            }
        }
        l += 2;
        MaxKolvo.append(to_string(Kolvo));
    }
    int Kol = 0, max = -1;
    for (int i = 0; i < MaxKolvo.length(); i++)
    {
        if (MaxKolvo[i] == '6')
        {
            Kol++;
        }
        else {
            if (Kol > max)
            {
                max = Kol;
            }
            Kol = 0;
        }
    }
    cout << "Максимальное число идущих подряд купе >>  " << max << endl;
}
