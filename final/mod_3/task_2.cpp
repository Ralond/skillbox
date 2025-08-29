#include <iostream>
int main(){
    int a = 42;
    int b = 153;
    int c;

    std::cout << "---программа обмена значений a и b---\n";
    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";
    std::cout << "--------\n";

    c = a;
    a = b;
    b = c;

    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";
}