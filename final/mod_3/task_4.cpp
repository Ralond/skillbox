#include <iostream>

int main(){
    int a = 42;
    int b = 153;

    std::cout << "---программа обмена значений 'a' и 'b' с усложнением---\n";
    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";
    std::cout << "--------\n";

    a *=b;
    b = a/b;
    a = a/b;

    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";
}