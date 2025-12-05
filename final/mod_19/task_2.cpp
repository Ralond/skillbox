#include <iostream>
#include <fstream>

int main(){
    std::string way;
    
    std::cout << "Enter the path to the file: ";
    std::cin >> way;

    std::ifstream file;
    file.open(way, std::ios::binary);

    bool find = false;
    int count = 0;
    if (file.is_open()){
        char buffer[100];

        while(file.read(buffer, 100)){
            std::streamsize colSimv = file.gcount();

            for(int i = 0; i < colSimv; i++){
                std::cout << buffer[i];
            }
        }

        std::streamsize lastSimv = file.gcount();
        if (lastSimv > 0){
            for(int i = 0; i < lastSimv; i++){
                std::cout << buffer[i];
            }
        }

        file.close();
    } else {
        std::cout << "Error!" << std::endl;
    }
    std::cout << std::endl;
}