#include <iostream>
using namespace std;
int main() {
    int vasyaNuggets;

    cout << "Сможет ли Вася купить наггетсы?\n";
    cout << "Сколько наггетсов хочет Вася? ";
    cin >> vasyaNuggets;

    cout << "-------------Проводим вычисления-------------\n";

    if (vasyaNuggets < 6){
        cout << "Меньше 6 наггетсов не продают. " << vasyaNuggets << "шт не отпустят.\n";
    } else if (vasyaNuggets % 9 == 0) {
        cout << "Тут всё просто - нужно всего лишь " << (vasyaNuggets/9) << " коробок по 9! В сумме получится ровно " << vasyaNuggets <<"шт.\n";
    } else if (vasyaNuggets % 6 == 0) {
        cout << "Тут всё просто - нужно всего лишь " << (vasyaNuggets/6) << " коробок по 6! В сумме получится ровно " << vasyaNuggets <<"шт.\n";
    } else if (vasyaNuggets >= 15 && (vasyaNuggets - 6) % 9 == 0) {
        cout << "Тут всё просто - нужно всего лишь " << ((vasyaNuggets - 6) / 9) << " коробок по 9 и 1 коробка по 6! В сумме получится ровно " << vasyaNuggets <<"шт.\n";
    } else if (vasyaNuggets >= 15 && (vasyaNuggets - 9) % 6 == 0) {
        cout << "Тут всё просто - нужно всего лишь " << ((vasyaNuggets - 9) / 6) << " коробок по 6 и 1 коробка по 9! В сумме получится ровно " << vasyaNuggets <<"шт.\n";
    } else cout << "Нужно количество наггетсов, кратное 6 или 9 шт.";
}