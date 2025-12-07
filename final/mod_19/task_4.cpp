#include <iostream>
#include <fstream>

int main(){
    std::string way;
    
    std::cout << "Enter the path to the file: "; std::cin >> way;
    if (way.size() >= 4){
        std::string extension = way.substr(way.size()-4); 
        std::cout << "File extension: " << extension << std::endl;
    }

    std::ifstream file(way, std::ios::binary);
    char head[4];

    if (file.is_open()){
        file.read(head, sizeof(head));
    }
    file.close();

    bool isPng =    (head[0] == -119) &&
                    (head[1] == 'P') &&
                    (head[2] == 'N') &&
                    (head[3] == 'G');

    if (isPng) std::cout << "The file is PNG." << std::endl;
    else std::cout << "The file is not PNG.";

}