#include <iostream>
#include <string>

using namespace std;
int main() {
    string direction;
    int x = 7, y = 10;

    cout << "=====������� ����=====\n";
    cout << "� ����� ������� ��������� ������? ����� (w), �� (s), ����� (a) ��� ������ (d):\n"; 
    for (;;){
        cout << "[��������]: ";
        cin >> direction;
        if (direction == "w") {
            if (x < 15 && x >= 0) x += 1;
        } else if (direction == "s") {
            if (x <= 15 && x > 0) x -= 1;
        } else if (direction == "d") {
            if (y < 20 && y >= 0) y += 1;
        } else if (direction == "a") {
            if (y <= 20 && y > 0) y -= 1;
        } else cout << "������� ����������� ���������� �������.\n";

        cout << "[���������]: �������� ��������� �� ������� " << x << "," << y << ", ������� �������:\n";
    }
}