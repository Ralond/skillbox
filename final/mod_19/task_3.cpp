#include <iostream>
#include <fstream>

int main(){
    std::string way = "names.txt", fName, lName, topFName,topLName, date;
    int pay, topPay = 0, summPay = 0;

    std::ifstream file;
    file.open(way);
    while (!file.eof()){
        file >> fName >> lName >> pay >> date;

        summPay += pay;
        if (topPay < pay) {
            topPay = pay;
            topFName = fName;
            topLName = lName;
        }
    }
        std::cout << topFName << " " << topLName << " has the maximum amount." << std::endl;
        std::cout << "Total paid out: " << summPay << std::endl;

    file.close();

}