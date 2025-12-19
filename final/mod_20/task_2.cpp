 #include <iostream>
 #include <fstream>
 #include <cstdlib>
 #include <ctime>

 int main(){
    std::srand(std::time(nullptr));
    int height, width, pix;
    std::cout << "Enter the height and width: ";
    std::cin >> height >> width;
    
    std::ofstream file ("pic.txt");

    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            pix = rand() % 2;
            file << pix;
        }
        if (i != height-1){
            file << std::endl;
        }
    }

    file.close();

 }