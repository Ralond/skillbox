#include <iostream>

int main(){
    float fileSize, connectionSpeed, downloaded = 0;
    using namespace std;
    cout << "=====Убийца Steam=====\n";

    while (true){
        cout << "Ввод:\n";
        cout << "Укажите размер файла для скачивания: "; cin >> fileSize;
        cout << "Какова скорость вашего соединения? "; cin >> connectionSpeed;

        cout << "Вывод:\n";
        for(int sec=1; downloaded < fileSize; sec++) {
            downloaded += connectionSpeed;
            if (downloaded > fileSize) downloaded = fileSize;
            cout << "Прошло " << sec << " сек. Скачано "<< downloaded << " из " << fileSize << " МБ (" << (int)(downloaded/fileSize*100) << "%)\n";
            cout << "==========\n";
        }
    }


}