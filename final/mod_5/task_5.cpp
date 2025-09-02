#include <iostream>
using namespace std;
int main() {
    int a;
    int b;
    int c;
    int m;
    int n;
    int k;

    cout << "Введите размеры первой коробки.\n";
    cout << "Ширина: ";
    cin >> a;
    cout << "Высота: ";
    cin >> b;
    cout << "Длина: ";
    cin >> c;
    
    cout << "Введите размеры второй коробки.\n";
    cout << "Ширина: ";
    cin >> m;
    cout << "Высота: ";
    cin >> n;
    cout << "Длина: ";
    cin >> k;

    cout << "-------------Проводим вычисления-------------\n"; //теперь проверяются все грани
    if (a <= m && b <= n && c <= k || a <= m && c <= n && b <= k || b <= m && a <= n && c <= k || b <= m && c <= n && a <= k || c <= m && b <= n && a <= k ||c <= m && a <= n && b <= k){
        cout << "Первая коробка помещается внутрь второй!";
    } else if (a >= m && b >= n && c >= k || a >= m && c >= n && b >= k || b >= m && a >= n && c >= k || b >= m && c >= n && a >= k || c >= m && b >= n && a >= k ||c >= m && a >= n && b >= k){
        cout << "Вторая коробка помещается внутрь первой!";
    } else cout << "Эти коробки не совместимы";
}