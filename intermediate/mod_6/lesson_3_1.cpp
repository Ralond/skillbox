#include <iostream>

using namespace std;
int main() {
    int result=0;
    int number;

    cout << "------Ѕанкомат 4.0------\n";
    cout << "¬ведите число без пробелов, равное 42 в сумме: "; cin >> number;

    while (number != 0){
        int a;
        a = number % 10;
        result += a;
        number /= 10;
        if (result == 42) {
            cout << "¬вод корректный";
        } else cout << "¬вод некорректный";
    }

}