#include <iostream>
using namespace std;
int main() {
    int i=0;
    int n;
    int result = 1;
    int rank;

    cout << "--------Вычисление степени числа--------\n"; 
    cout << "Введите число: "; cin >> n;
    cout << "Введите степень числа: "; cin >> rank;
    while (rank <= 0){
        if (rank < 0){
            cout << "Степень числа должна быть положительной! Введите положительную степень: "; cin >> rank;
        } else if (rank == 0) {
            cout << "Число " << n << " в степени 0 равно 1\n";
            break;
        }
    }
    while (i < rank) {
        result *=n;
        i++;
        cout << "Число " << n << " в степени " << i << " равно " << result << "\n";
    }
}