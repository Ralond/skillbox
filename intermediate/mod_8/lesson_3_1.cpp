#include <iostream>

using namespace std;
int main(){
    float kc, gravicap;
    int chatl;

    cout << "======��======\n";
    while (true){
        cout << "=============================\n";
        cout << "������� � ��� ������? "; cin >> chatl;

        kc = (float) chatl / 4400;
        cout << "��� �����:  " << kc << " ��!\n";

        gravicap = kc / 2;
        cout << "�� ������� ������ " << (int) gravicap << " ��������!\n";
    }

}