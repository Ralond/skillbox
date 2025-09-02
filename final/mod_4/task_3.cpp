#include <iostream>
using namespace std;
int main() {
    int number;
    
    cout << "ѕровер€ем число на четность.\n";
    cout << "¬ведите число: ";
    cin >> number;

    if (number % 2 == 0){
        cout << "„исло " << number << " Ч чЄтное!";
    } else {
        cout << "„исло " << number << " Ч нечЄтное!";
    }
}
