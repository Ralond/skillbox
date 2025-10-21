#include <iostream>

int findAt(std::string text) {
    int count = 0;
    for (char c : text) {
        if (c != '@') {
            count++;
        } else if (c == '@') 
            break;
    }
    return (count != 0) ? count : -1;
}

std::string findFirst(std::string text){
    std::string result;
    int numAt = findAt(text);
    for (int i = 0; i < numAt; i++){
        result += text[i];
    }
    return result;
}

std::string findTwo(std::string text){
    std::string result;
    int numAt = findAt(text);
    for (int i = numAt + 1; i < text.length(); i++){
        result += text[i];
    }
    return result; 
}

bool goodFirst(std::string text){
    std::string dictionary = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!#$%&'*+-/=?^_`{|}~.";
    bool goodSymbol = false;
    int longText = text.length();

    if (longText < 1 || longText > 64 || text[0] == '.' || text[longText] == '.') 
        return false;

    for (int i = 0; i < text.length(); i++){
        for (int j = 0; j < dictionary.length(); j++){
            if (text[i] != dictionary[j]){
                goodSymbol = false;
            } else {
                goodSymbol = true;
                break;
            }
        }
        if (goodSymbol == false)
            return false;

        if (i > 1){
            if (text[i] == '.' && text[i-1] == '.')
                return false;
        }
    }
    return true;
}

bool goodTwo(std::string text){
    std::string dictionary = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-.";
    bool goodSymbol = false;
    int longText = text.length();

    if (longText < 1 || longText > 63 || text[0] == '.' || text[longText] == '.') 
        return false;

    for (int i = 0; i < text.length(); i++){
        for (int j = 0; j < dictionary.length(); j++){
            if (text[i] != dictionary[j]){
                goodSymbol = false;
            } else {
                goodSymbol = true;
                break;
            }
        }
        if (goodSymbol == false)
            return false;

        if (i > 1){
            if (text[i] == '.' && text[i-1] == '.')
                return false;
        }
    }
    return true;
}

int main(){
    // std::cout << "=====«Проверка корректности email-адреса»=====\n";
    
    std::string email;
    while (true){
        std::cout << "Enter e-mail: "; std::cin >> email;
        bool atTrue = findAt(email);
        bool firstGood = goodFirst(findFirst(email));
        bool twoGood = goodTwo(findTwo(email));

        
        if (atTrue && firstGood && twoGood){
            std::cout << "yes\n";
        } else std::cout << "no\n";
    }
}