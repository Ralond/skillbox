#include <iostream>
#include <string>

using namespace std;

int main() {
    string text;
    cout << "Input text: \n"; 
    getline(cin, text);
    
    int length = text.length();
    bool isRepeating = false;
    
    // Перебираем все возможные длины повторяющейся части
    for (int partLength = 1; partLength <= length / 2; partLength++) {
        // Пропускаем, если длина строки не делится на длину части
        if (length % partLength != 0) {
            continue;
        }
        
        // Предполагаем, что строка повторяется
        bool currentIsRepeating = true;
        int repeatsCount = length / partLength;
        
        // Проверяем все повторения
        for (int repeat = 1; repeat < repeatsCount; repeat++) {
            // Проверяем каждый символ в текущем повторении
            for (int i = 0; i < partLength; i++) {
                int currentPos = repeat * partLength + i;
                int originalPos = i;  // Позиция в оригинальной части
                
                if (text[currentPos] != text[originalPos]) {
                    currentIsRepeating = false;
                    break;
                }
            }
            if (!currentIsRepeating) break;
        }
        
        if (currentIsRepeating) {
            isRepeating = true;
            break;
        }
    }
    
    if (isRepeating) {
        cout << "Yes!\n";
    } else {
        cout << "No!\n";
    }
    
    return 0;
}