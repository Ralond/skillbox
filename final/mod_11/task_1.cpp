#include <iostream>
#include <string>

std::string encryption(std::string text, int position){
    std::string result;
    int num;

    for (int i = 0; i < text.length(); i++){
        if (text[i] >= 'a' && text[i] <= 'z') {
            num = (text[i] - int('a') + position) % 26;
            result += char(num + 'a');
        } else if (text[i] >= 'A' && text[i] <= 'Z') {
            num = (text[i] - int('A') + position) % 26;
            result += char(num + 'A');
        } else {
            result += text[i];
        }
    }
    return result;
}

int main(){
    using namespace std;

    while (true){
        string text;
        int pos;
        
        cout << "Enter the text: ";
        getline(cin, text);
        
        cout << "Enter the encryption position: "; cin >> pos;

        cout << "Result: " << encryption(text, pos) << endl;
        cin.get();
    }
}