#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ofstream ofile
    ("/Users/dakete/Documents/GitHub/university-projects/dz 4.1/dz 4.1/test.txt");
    if (ofile.is_open())
    {
        cout << "Файл открыт" << endl;
        float km;
        for (int i = 0; i < 10; i++)
        {
            cout << "Введите число: ";
            cin >> km;
            ofile << km;
            ofile << " ";
            
        }
        ofile.close();
    }
    
    ifstream ffile ("/Users/dakete/Documents/GitHub/university-projects/dz 4.1/dz 4.1/test.txt");
    if (ffile.is_open())
    {
        string line;
        float sum = 0;
        char ch;
        while (ffile.get(ch))
        {
            if (ch != ' ')
            {
                line += ch;

            }
            else
            {
                auto res = stod(line);
                sum += res;
                line = "";
            }
        }
        cout << "Сумма чисел в файле = " << sum << endl;
    }
}
