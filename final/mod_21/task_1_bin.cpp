#include <iostream>
#include <string>
#include <fstream>
#include <vector>

struct person{
    std::string fName = "Ivan";
    std::string lName = "Ivanov";
    std::string date = "01.01.1990";
    int payout = 0;

    person(const std::string& fn, const std::string& ln, 
            const std::string& d, int p) : fName(fn), lName(ln), date(d), payout(p){}
};

void saveFile(std::ofstream& file, person& roster){
    int lenfName = roster.fName.length();
    int lenlName = roster.lName.length();
    int lenData = roster.date.length();
    
    file.write((char*)&lenfName, sizeof(lenfName));
    file.write(roster.fName.c_str(), lenfName);

    file.write((char*)&lenlName, sizeof(lenlName));
    file.write(roster.lName.c_str(), lenlName);

    file.write((char*)&lenData, sizeof(lenData));
    file.write(roster.date.c_str(), lenData);

    file.write((char*)&roster.payout, sizeof(roster.payout));
}

void addPerson(std::vector<person>& roster){
    std::string choice = "yes";
    while(choice == "yes"){
        std::string fName, lName, date;
        int payout;

        std::cout << "Enter first and last name: ";
        std::cin >> fName >> lName;
        do{
            std::cout << "Enter the date (dd.mm.yyyy): ";
            std::cin >> date;

            if (std::stoi(date.substr(0,2)) > 31 || std::stoi(date.substr(0,2)) < 1 || 
                    std::stoi(date.substr(3,2)) > 12 || std::stoi(date.substr(3,2)) < 1) 
                std::cout << "Incorrect date format!" << std::endl;

        } while (std::stoi(date.substr(0,2)) > 31 || std::stoi(date.substr(0,2)) < 1 || 
                    std::stoi(date.substr(3,2)) > 12 || std::stoi(date.substr(3,2)) < 1);

        std::cout << "Enter the payment: ";
        std::cin >> payout;

        roster.push_back(person(fName,lName,date,payout));
    
        std::cout << "Add new person? (yes, no): ";
        std::cin >> choice;
    }
}


int main(){
    std::string command = "NULL";

    while (command != "close"){
        std::vector<person> roster;

        std::cout << "Enter command: "; std::cin >> command;

        if (command == "add"){

            addPerson(roster);

            std::ofstream file("roster.bin", std::ios::binary | std::ios::app);
            for (int i = 0; i < roster.size(); i++){
                saveFile(file, roster[i]);
            }
            file.close();
        }

        if (command == "list"){
            std::ifstream file("roster.bin", std::ios::binary);

            while (!file.eof()){
                std::string fName, lName, date;
                int payout;
                int lenfName, lenlName, lenDate;
                
                file.read((char*)&lenfName, sizeof(lenfName));
                fName.resize(lenfName);
                file.read((char*)fName.c_str(), lenfName);

                file.read((char*)&lenlName, sizeof(lenlName));
                lName.resize(lenlName);
                file.read((char*)lName.c_str(), lenlName);

                file.read((char*)&lenDate, sizeof(lenDate));
                date.resize(lenDate);
                file.read((char*)date.c_str(), lenDate);

                file.read((char*)&payout, sizeof(payout));
                if (!file.eof()) 
                    roster.push_back(person(fName,lName,date,payout));
            }
            file.close();

            for(int i = 0; i < roster.size(); i++){
                std::cout << roster[i].fName << " " << roster[i].lName 
                << " " << roster[i].date << " " << roster[i].payout << std::endl;
            }
        }

    }
}