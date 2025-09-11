#include <iostream>
using namespace std;

int main() {
    int m;
    int n;
    int remains, lastRemains;
    bool found = false;

    cout << "Введите числитель: "; cin >> m;
    cout << "Введите знаменатель: "; cin >> n;

    if (n > m){
        remains = n % m;
        while (!found) {
            lastRemains = remains;
            remains = m % remains; //При 6/12 - в делителе получается ноль.
            if (remains == 0) found = true;
        }
    } else if (m > n){
        remains = m % n;
        while (!found) {
            lastRemains = remains;
            remains = n % remains;
            if (remains == 0) found = true;
        }
    }
    m /= lastRemains;
    n /= lastRemains;


    cout << "Результат: " << m << "/" << n;
}