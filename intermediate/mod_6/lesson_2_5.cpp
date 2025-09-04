#include <iostream>

using namespace std;
int main() {
    int a;
    int b;
    int c;
    int d;

    cout << "--------Ѕанкомат 3.0--------\n"; 
    while (true){
        cout << "¬ведите 4 числа: ";
        cin >> a >> b >> c >> d;

        if (a+b+c+d == 42) {
            cout << "¬вод корректный\n";
        } else if (a+b+c+d != 42) {
            cout << "¬вод некорректный, попробуйте еще раз\n";
        }
    }
}