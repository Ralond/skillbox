#include <iostream>
using namespace std;

int main() {
    int height;

    cout << "=====������=====\n";
    cout << "������� ������ ������: "; cin >> height;

    if (height <= 0) {
        cout << "������� ������ ������ ����: "; cin >> height;
    }

    for (int row = 0; row < height; row++) {
        int spaces = height - row - 1;
        int grid  = 2 * row + 1;

        // ������� ���� � ���������
        for (int i = 0; i < spaces; i++) cout << " ";
        // ������� ���� � ��������
        for (int i = 0; i < grid; i++) cout << "#";

        // ��������� ������
        cout << "\n";
    }
}