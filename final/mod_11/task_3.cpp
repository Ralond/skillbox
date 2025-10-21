#include <iostream>

using namespace std;

bool partIp(string& text){
    int textToNumber = 0;
    if (text == "" || text.length() > 3) return false;
    for (int i = 0; i < text.length(); i++){
        if (i > 0 && text[0] == '0' && text[i] == '0') return false;
        textToNumber = textToNumber * 10 + (text[i] - '0');
    }
    if (textToNumber < 0 || textToNumber > 255) {
        return false;
    } else return true;
}

bool checkIp(string& text){
    int countDot = 0;
    string part = "";

    for (int i = 0; i < text.length(); i++){
        if (text[i] == '.'){
            countDot++;
            if (!partIp(part) || countDot > 3)
                return false;
            part = "";
        } else if (text[i] >= '0' && text[i] <= '9'){
            part += text[i];
        } else return false;
    }
    if (!partIp(part) || countDot < 3) {
        return false;
    } else return true;
}

int main(){
    // cout << "=====«Валидация IP-адреса»=====\n";
    while (true){
        string adressIp = ""; 
        cout << "Enter the IP Address: "; cin >> adressIp;

        if (checkIp(adressIp)){
            cout << "Valid" << endl;
        } else {
            cout << "Invalid" << endl;
        }
    }
}