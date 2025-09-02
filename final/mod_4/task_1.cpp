#include <iostream>
using namespace std;
int main(){
    int first;
    int second;
    cout << "Найдем минимальное значение.\n";
    cout << "Введите первое число: ";
    cin >> first;
    cout << "Введите второе число: ";
    cin >> second;
    cout << "-----Проверяем-----\n";
    if (first == second){
        cout << "Числа равны!";
    } else if (first > second){
        cout << "Наименьшее число: " << second;
    } else {
        cout << "Наименьшее число: " << first;
    }
  
}
