#include <iostream>
int main(){
    int pas = 0;
    int ticket = 20;
    int salary = 0;
    int pasOut;
    int pasIn;
//В рекомендациях к заданию указано "отсутствие лишних переменных".
//можно сделать вариант с переменными "пятая часть" и "четвёртая часть", 
//вместо следующих четырёх, но для понятности кода я решил добавить их все.
    int driverPay;
    int gasPay;
    int taxes;
    int repair;
    int balance;

    std::string firstStop = "Улица программистов";
    std::string secondStop = "Проспект алгоритмов";
    std::string thirdStop = "Бульвар функций";
    std::string fourthStop = "Перекрёсток классов";

//Ещё, чтобы без особых усилий добавить следующие остановки - у меня мысли только про массивы и циклы, но это ещё не проходили.
    std::cout << "Прибываем на остановку «" << firstStop << "». В салоне пассажиров: " << pas << "\n";
    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> pasOut;
    std::cout << "Сколько пассажиров зашло на остановке? ";
    std::cin >> pasIn;
    pas += (pasIn - pasOut);
    salary += ticket * pasIn;
    std::cout << "Отправляемся с остановки «" << firstStop << "». В салоне пассажиров: " << pas << "\n";
    std::cout << "-----------Едем-----------\n";

    std::cout << "Прибываем на остановку «" << secondStop << "». В салоне пассажиров: " << pas << "\n";
    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> pasOut;
    std::cout << "Сколько пассажиров зашло на остановке? ";
    std::cin >> pasIn;
    pas += (pasIn - pasOut);
    salary += ticket * pasIn;
    std::cout << "Отправляемся с остановки «" << secondStop << "». В салоне пассажиров: " << pas << "\n";
    std::cout << "-----------Едем-----------\n";

    std::cout << "Прибываем на остановку «" << thirdStop << "». В салоне пассажиров: " << pas << "\n";
    std::cout << "Сколько пассажиров вышло на остановке? ";
    std::cin >> pasOut;
    std::cout << "Сколько пассажиров зашло на остановке? ";
    std::cin >> pasIn;
    pas += (pasIn - pasOut);
    salary += ticket * pasIn;
    std::cout << "Отправляемся с остановки «" << thirdStop << "». В салоне пассажиров: " << pas << "\n";
    std::cout << "-----------Едем-----------\n";

    std::cout << "Прибываем на конечную остановку «" << fourthStop << "». В салоне пассажиров: " << pas << "\n";
    std::cout << "Приехало " << pas << " пассажиров.\n";
    std::cout << "--------------------------\n";


    std::cout << "Всего заработали: " << salary << " руб.\n";
    driverPay = salary/4;
    std::cout << "Зарплата водителя: " << driverPay << " руб.\n";
    gasPay = salary/5;
    std::cout << "Расходы на топливо: " << gasPay << " руб.\n";
    taxes = salary/5;
    std::cout << "Налоги: " << taxes << " руб.\n";
    repair = salary/5;
    std::cout << "Расходы на ремонт машины: " << repair << " руб.\n";

    balance = salary - driverPay - gasPay - taxes - repair;
    std::cout << "Итого доход: " << balance << " руб.\n";

}