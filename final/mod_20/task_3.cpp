 #include <iostream>
 #include <fstream>
 #include <cstdlib>
 #include <ctime>

 int main(){
    std::string target, fish = "NULL";
    std::cout << "What kind of fish do you want to catch? ";
    std::cin >> target;
    int total = 0;

    std::ifstream fileRead("river.txt");
    std::ofstream fileWrite ("basket.txt", std::ios::app);

    while (fileRead >> fish){
        if (target == fish){
            fileWrite << fish << "\n";
            total++;
        }
    }
    fileRead.close();

    fileWrite << "Total " << target << " caught: " << total << std::endl;
    fileWrite.close();
}