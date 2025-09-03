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

    cout << "--------Программа напоминалка--------\n"; 
    while (true){
        cout << "Сколько раз напомнить? "; cin >> countReminder;
        cin.ignore();
        cout << "О чём напомнить? "; 
        getline(cin, reminderOne);
        cout << "Введите фразу - напоминалку для первой задачи: "; 
        getline(cin, phraseOne);
        cout << "Ещё о чём-то напомнить? "; 
        getline(cin, reminderOne);
        cout << "Введите фразу - напоминалку для второй задачи: "; 
        getline(cin, phraseOne);


        cout << "Помните фразу? "; 
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
        } else cout << "Такой фразы нет, всё по новой\n";

        cout << "(yes) - завершить программу, (no) - продолжить: ";
        getline(cin, exit);
        if (exit == "yes"){
            break;
        }
    }
}