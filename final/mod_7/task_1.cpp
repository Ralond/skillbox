#include <iostream>
using namespace std;

int main(){
    int remainedBuckwheat = 100;
    int counter = 1;

    cout << "=====������ ��������������=====\n";
    cout << "����� ������ ���� �� ������ ��������: "<< remainedBuckwheat << "��.\n";

    for (;remainedBuckwheat != 0; counter++){
        remainedBuckwheat -= 4;
        if (remainedBuckwheat == 0) {
            cout << "����� " << counter << " ������ ������ ����������.";
        } else {
        cout << "����� "<< counter << " ������ � ��� � ������ ��������� " << remainedBuckwheat << "�� ������\n";
        }
    }

}