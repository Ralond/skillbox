#include <iostream>
using namespace std;

int main() {
    int m;
    int n;
    int remains, lastRemains;
    bool found = false;

    cout << "=====���������� �����=====\n";
    cout << "������� ���������: "; cin >> m;
    cout << "������� �����������: "; cin >> n;

    if (n > m){
        remains = n % m;
        while (!found) {
            lastRemains = remains;
            if (remains == 0) break;
            remains = m % remains;
            if (remains == 0) found = true;
        }
    } else if (m > n){
        remains = m % n;
        while (!found) {
            lastRemains = remains;
            if (remains == 0) break;
            remains = n % remains;
            if (remains == 0) found = true;
        }
    }
    if (lastRemains != 0){
        m /= lastRemains;
        n /= lastRemains;
        cout << "���������: " << m << "/" << n;
    } else if (m/n >=1) {
        cout << "���������: " << m/n;
    } else cout << "��������� ������ 1";
}