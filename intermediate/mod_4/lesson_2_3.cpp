#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "----------Найдём модуль числа----------\n";
    cout << "Введите число: ";
    cin >> a;
    if (a<0){
        a = -a;
    }
    cout << "модуль числа: |" << a <<"|";
    
}