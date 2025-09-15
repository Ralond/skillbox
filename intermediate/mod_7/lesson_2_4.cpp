#include <iostream>

using namespace std;
int main() {
    int number;
    int sum=0;

    cout << "=====Сумма нечётных=====\n";
    cout << "До какого числа посчитать нечетные числа? "; cin >> number;
    cout << "-------------------------\n";

    for (int i = 1; i <= number; i++){
        if (i % 2 != 0) {
            sum += i;
        }
    }
    cout << "Ответ: " << sum << "\n";
}