//bubblesort(массив, размер массива); 
#include <iostream>

using namespace std;
void bubblesort(int* mass, int s) { //передается адрес массива и его длина
    if (s <= 1) return;

    bool flag = true;
    while (flag){
        flag = false;
        for (int i = 0; i < s-1; i++){
            if (*(mass+i) > *(mass+i+1)){
                swap(*(mass+i), *(mass+i+1));
                flag = true;
            }
        }
        s--;
    }
}