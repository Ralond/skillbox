#include <iostream>
using namespace std;
int main() {
    int i=0;
    int n;
    int result = 1;
    int rank;

    cout << "--------���������� ������� �����--------\n"; 
    cout << "������� �����: "; cin >> n;
    cout << "������� ������� �����: "; cin >> rank;
    while (rank <= 0){
        if (rank < 0){
            cout << "������� ����� ������ ���� �������������! ������� ������������� �������: "; cin >> rank;
        } else if (rank == 0) {
            cout << "����� " << n << " � ������� 0 ����� 1\n";
            break;
        }
    }
    while (i < rank) {
        result *=n;
        i++;
        cout << "����� " << n << " � ������� " << i << " ����� " << result << "\n";
    }
}