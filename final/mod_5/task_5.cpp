#include <iostream>
using namespace std;
int main() {
    int a;
    int b;
    int c;
    int m;
    int n;
    int k;

    cout << "������� ������� ������ �������.\n";
    cout << "������: ";
    cin >> a;
    cout << "������: ";
    cin >> b;
    cout << "�����: ";
    cin >> c;
    
    cout << "������� ������� ������ �������.\n";
    cout << "������: ";
    cin >> m;
    cout << "������: ";
    cin >> n;
    cout << "�����: ";
    cin >> k;

    cout << "-------------�������� ����������-------------\n"; //������ ����������� ��� �����
    if (a <= m && b <= n && c <= k || a <= m && c <= n && b <= k || b <= m && a <= n && c <= k || b <= m && c <= n && a <= k || c <= m && b <= n && a <= k ||c <= m && a <= n && b <= k){
        cout << "������ ������� ���������� ������ ������!";
    } else if (a >= m && b >= n && c >= k || a >= m && c >= n && b >= k || b >= m && a >= n && c >= k || b >= m && c >= n && a >= k || c >= m && b >= n && a >= k ||c >= m && a >= n && b >= k){
        cout << "������ ������� ���������� ������ ������!";
    } else cout << "��� ������� �� ����������";
}