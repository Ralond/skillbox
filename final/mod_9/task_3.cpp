#include <iostream>
#include <string>

int main(){
    using namespace std;
    // cout << "=====Подсчёт количества слов=====\n";

    string text;

    while (true){
        cout << "Enter the text: "; getline(cin, text);
        
        int coutWord = 0, lenghtText = text.length();
        for (int i = 1; i < text.length(); i++){
            if (text[i] == ' ' && text[i-1] > ' '){
                coutWord++;
            }
        }

        if (text[lenghtText-1] > ' '){
            coutWord++;
        }
        cout << "Answer: " << coutWord << "\n";
    }
}