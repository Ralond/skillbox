#include <iostream>
#include <fstream>
#include <vector>

int main(){
    int sector = 1, offset, playerScore = 0, viewerScore = 0;
    std::string way, text, answer, youAnswer;
    std::vector<int> doneQuestion;
    
    while (playerScore < 6 && viewerScore < 6){
        std::cout << "Enter offset: "; std::cin >> offset;

        sector += offset;
        if (sector > 13) sector %= 13;

        for (int i = 0; i < doneQuestion.size(); i++){
            if (doneQuestion[i] == sector) {
                sector++;
                i = 0;
            }
        }
        doneQuestion.push_back(sector);


        way = "WWW/"+std::to_string(sector)+"/q_"+ std::to_string(sector)+ ".txt";

        std::ifstream file(way);

        if (file.is_open()){
            std::getline(file, text);
            std::cout << text << std::endl << "Your answer: ";
            std::cin >> youAnswer;
            file.close();
        }

        way = "WWW/" + std::to_string(sector)+"/a_"+ std::to_string(sector)+ ".txt";
        file.open(way);

        if (file.is_open()){
            file >> answer;
            if (answer == youAnswer) {
                playerScore++;
                std::cout << "Yes!" << std::endl;
            } else {
                viewerScore++;
                std::cout << "No!" << std::endl;
            }
            file.close();
        }
    }
    if (playerScore == 6) {
        std::cout << "You win!" << std::endl;
    } else std::cout  << "Viewers win!" << std::endl;

}