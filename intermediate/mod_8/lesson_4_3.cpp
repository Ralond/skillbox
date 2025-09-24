#include <iostream>
#include <cmath>

using namespace std;
int main(){
    float point, brightness;
    int leftborder, rightBorder;
    
    cout << "======������ Photoshop======\n";
    while (true){
        do {
            cout << "������� ������� ����� ������� ���������: "; cin >> leftborder;
            if (leftborder < 0 || leftborder > 255) cout << "������! ������� ������ ���� �� 0 �� 255!\n";
        } while (leftborder < 0 || leftborder > 255);

        do {
            cout << "������� ������ ������� ���������: "; cin >> rightBorder;
            if (rightBorder < 0 || rightBorder > 255) cout << "������! ������� ������ ���� �� 0 �� 255!\n";
        } while (rightBorder < 0 || rightBorder > 255);

        do {
            cout << "������� ��������� ����� ����� ���������: "; cin >> point;
            if (point < 0 || point > 1) cout << "������! �������� ������ ���� �� 0 �� 1!\n";
        } while (point < 0 || point > 1);

        brightness = (rightBorder - leftborder) * point + leftborder;
        
        cout << "������� �����: "<< brightness << ".\n";

        cout << "=============================\n";
    }
}