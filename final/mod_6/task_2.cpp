#include <iostream>
using namespace std;
int main() {
    int i = 0;
    int number;
    bool verification = true;

    cout << "������� �����: "; cin >> number;

    while (verification) {
        ++i;
        number /=10;
        if (number == 0) verification = false;
    }
    cout << "���� � �����: " << i;
}