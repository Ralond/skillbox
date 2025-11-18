#include <iostream>
#include <fstream>

int main(){
    std::string way;
    
    std::cout << "Enter the path to the file: ";
    std::cin >> way;

    std::ifstream file;
    file.open(way);

    bool find = false;
    int count = 0;
    if (file.is_open()){
        char text;
        while(file.get(text)){
            std::cout << text;
        }
        file.close();
    } else {
        std::cout << "Error!" << std::endl;
    }
}