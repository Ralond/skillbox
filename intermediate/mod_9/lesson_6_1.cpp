#include <iostream>
#include <string>

int main(){
    using namespace std;

    string text, word;
    cout << "Input text: \n"; getline(cin, text);
    cout << "Input word: \n"; cin >> word;

    bool found = false;
    for (int i=0; i + word.length() <= text.length(); i++){
        bool match = true;
        for (int j=0; j < word.length(); j++){
            if (word[j] != text[j+i]){
                match = false;
                break;
            }
        }
        if (match) {
            found = true;
            break;
        }

    }
    if (found) {
        cout << "Yes!\n";
    } else cout << "No!\n";

}