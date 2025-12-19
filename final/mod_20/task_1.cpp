 #include <iostream>
 #include <fstream>
 #include <string>

 int main(){
    std::string fName, lName, dateOfIssue, finish;
    double payout, sum = 0;

    std::ofstream file("statement.txt", std::ios::app);
    
    while (file.is_open()){
        std::cout << "Enter first and last name: ";
        std::cin >> fName >> lName;
        do{
            std::cout << "Enter the payment date: ";
            std::cin >> dateOfIssue;

            if (std::stoi(dateOfIssue.substr(3,2)) > 12 || std::stoi(dateOfIssue.substr(3,2)) < 1) 
                std::cout << "Incorrect date format!" << std::endl;

        } while (std::stoi(dateOfIssue.substr(3,2)) > 12 || std::stoi(dateOfIssue.substr(3,2)) < 1);

        std::cout << "Enter the payment: ";
        std::cin >> payout;

        file << fName << " " << lName << " " << dateOfIssue << " " << payout << " RUB" << std::endl;
        sum += payout;

        std::cout << "Finish recording? (yes, no): ";
        std::cin >> finish;
        if (finish == "yes") {
            file << "The amount of payments: " << sum << " RUB" << "\n";
            file.close();
        }
    }
 }