#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]){
    long n,k,l,r;
    vector <long> vecOfGroups;
    cin>> n >> k;
    l = n / 2;
    r = n / 2;
    if (!(n % 2)) l -= 1;
    vecOfGroups.push_back(l);
    vecOfGroups.push_back(r);
    if (k > 1){
        for(int i = 1; i < k;++i){
            n = *max_element(vecOfGroups.begin(), vecOfGroups.end());//возвращает итератор максимального элемента
            l = n / 2;//определяем количество свободys[х мест с каждой стороны после занятие места
            r=n / 2;
            if (!(n % 2)) l -= 1;//если общее количество мест четное, то удаляем занятое место с одной сторогны
            vecOfGroups.erase(max_element(vecOfGroups.begin(), vecOfGroups.end()));
            vecOfGroups.push_back(l);
            vecOfGroups.push_back(r);
        }
    }
    cout << l << " " << r << '\n';
}
