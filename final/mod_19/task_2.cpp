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
        char buffer[100];
        file.read(buffer, 100);
        std::streamsize corSimv = file.gcount();
        while(corSimv > 0){
            for(int i = 0; i < 100; i++){
                std::cout << buffer[i];
            }
            file.read(buffer, 100);
            corSimv = file.gcount();
        }
        file.close();
    } else {
        std::cout << "Error!" << std::endl;
    }
}