#include <iostream>
#include <cmath>

using namespace std;
int main(){
    float horseX, horseY;
    float nextX, nextY;

    cout << "======��� ����======\n";
    while (true){
        cout << "=============================\n";
        cout << "������� �������������� ����: "; cin >> horseX >> horseY;
        cout << "������� �������������� ����� �� �����: "; cin >> nextX >> nextY;

        while (nextY <= 0 || horseY <= 0 || nextY >= 1 || horseY >= 1) {
            cout << "������! ������� �������������� ������ � ���������: "; cin >> nextX >> nextX;
        }

        horseX *= 10;
        horseY *= 10;
        nextX *= 10;
        nextY *= 10;
        
        cout << "���� � ������ (" << (int) horseX <<", " << (int) horseY << "). ";
        cout << "����� � ������ (" << (int) nextX <<", " << (int) nextY << ").\n";

        int dX = abs((int)horseX - (int)nextX);
        int dY = abs((int)horseY - (int)nextY);
        
        if ((dX == 2 && dY == 1) || (dX == 1 && dY == 2)){
            cout << "��, ���� ����� ������ � ��� �����.\n";
        } else cout << "���, ���� �� ����� ������ � ��� �����.\n";
    }
}