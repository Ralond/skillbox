#include <iostream>
using namespace std;
int main() {
    int first;
    int second;
    int result;
    int mindÑounting;
    
    cout << "Ïğîâåğêà ñêëàäûâàíèÿ â óìå.\n";
    cout << "Ââåäèòå ïåğâîå ÷èñëî: ";
    cin >> first;
    cout << "Ââåäèòå âòîğîå ÷èñëî: ";
    cin >> second;
    cout << "Ââåäèòå èõ ñóììó: ";
    cin >> mindÑounting;

    cout << "-----Ïğîâåğÿåì-----\n";
    result = first + second;

    if (mindÑounting == result){
        cout << "Âåğíî!";
    } else {
        cout << "Îøèáêà! Âåğíûé ğåçóëüòàò: " << result;
    }
}
