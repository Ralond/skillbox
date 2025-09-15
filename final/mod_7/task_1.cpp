#include <iostream>
using namespace std;

int main(){
    int remainedBuckwheat = 100;
    int counter = 1;

    cout << "=====Запасы продовольствия=====\n";
    cout << "Всего гречки было на начало подсчета: "<< remainedBuckwheat << "кг.\n";

    for (;remainedBuckwheat != 0; counter++){
        remainedBuckwheat -= 4;
        if (remainedBuckwheat == 0) {
            cout << "После " << counter << " месяца гречка закончится.";
        } else {
        cout << "После "<< counter << " месяца у вас в запасе останется " << remainedBuckwheat << "кг гречки\n";
        }
    }

}