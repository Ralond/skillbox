#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int angle;
    float angleRad;
    
    cout << "======���������======\n";
    while (true){
        cout << "������� ���� ������� � ��������: "; cin >> angle;

        angle = angle % 360;
        if (angle > 180) {
            angle -= 360;
        } else if (angle < -180) angle += 360;

        angleRad = 3.1415 / 180 * (float)angle;
        cout << angleRad << " ���. ��������. " << (float) angle << " ��������.\n";

        if (fabs(angleRad) > 0.28) {
            cout << "���� �����������!\n";
        } else cout << "���� ���������.\n";

        cout << "=============================\n";
    }
}