#include <iostream>
using namespace std;

int main() {
    int m;
    int n;
    int remains, lastRemains;
    bool found = false;

    cout << "������� ���������: "; cin >> m;
    cout << "������� �����������: "; cin >> n;

    if (n > m){
        remains = n % m;
        while (!found) {
            lastRemains = remains;
            remains = m % remains; //��� 6/12 - � �������� ���������� ����.
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


    cout << "���������: " << m << "/" << n;
}