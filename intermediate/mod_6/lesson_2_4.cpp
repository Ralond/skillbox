#include <iostream>
#include <string>

using namespace std;
int main() {
    int countReminder;
    int i=0;
    string reminderOne;
    string reminderTwo;
    string phraseOne;
    string phraseTwo;
    string hint;
    string exit;

    cout << "--------��������� �����������--------\n"; 
    while (true){
        cout << "������� ��� ���������? "; cin >> countReminder;
        cin.ignore();
        cout << "� ��� ���������? "; 
        getline(cin, reminderOne);
        cout << "������� ����� - ����������� ��� ������ ������: "; 
        getline(cin, phraseOne);
        cout << "��� � ���-�� ���������? "; 
        getline(cin, reminderOne);
        cout << "������� ����� - ����������� ��� ������ ������: "; 
        getline(cin, phraseOne);


        cout << "������� �����? "; 
        getline(cin, hint);
        if (hint == phraseOne){
            while (i < countReminder) {
            i++;
            cout << i << ". " << reminderOne << "\n";
            }
        } else if (hint == phraseTwo) {
            while (i < countReminder) {
            i++;
            cout << i << ". " << reminderTwo << "\n";
            }
        } else cout << "����� ����� ���, �� �� �����\n";

        cout << "(yes) - ��������� ���������, (no) - ����������: ";
        getline(cin, exit);
        if (exit == "yes"){
            break;
        }
    }
}