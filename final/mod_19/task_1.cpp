#include <iostream>
#include <fstream>

int main(){
    std::string required, search;
    
    std::cout << "Enter the word you are looking for: ";
    std::cin >> required;

    std::ifstream file;
    file.open("words.txt");

    bool find = false;
    int count = 0;
    while(!file.eof()){
        file >> search;
        if (search == required){
            count++;
        }
    }
    file.close();

    std::cout << "The word appears in the text: " << count << "times" << std::endl;
}