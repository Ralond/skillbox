#include <iostream>

int main(){
    int a = 42;
    int b = 153;

    std::cout << "---��������� ������ �������� 'a' � 'b' � �����������---\n";
    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";
    std::cout << "--------\n";

    a *=b;
    b = a/b;
    a = a/b;

    std::cout << "a: " << a << "\n";
    std::cout << "b: " << b << "\n";
}