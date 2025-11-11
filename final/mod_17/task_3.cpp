#include <iostream>

std::string substr(const char* a, const char* b){
    for (int i = 0; *(a+i) != '\0'; i++){
        bool found = true;
        for (int j = 0; *(b+j) != '\0'; j++){
            if (*(a+i+j) != *(b+j)){
                found = false;
                break;
            }
        }
        if (found) return "true";
    }
    return "false";
}

int main(){
    const char* a = "Hello world";
    const char* b = "wor";
    const char* c = "banana";
    std::cout << substr(a,b) << " " << substr(a,c);
}