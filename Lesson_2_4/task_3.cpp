#include <iostream>



int main() {

	int durationShift = 240;
	int orderTime = 10;
	int orderAssembly = 5;
	int totalСlient = durationShift / (orderTime + orderAssembly);

	std::cout << "Эта программа рассчитает, сколько клиентов успеет обслужить кассир за смену.\n";
	std::cout << "----------------------------------------------------------------------------\n";

	std::cout << "Введите длительность смены в минутах: " << durationShift << "\n";
	std::cout << "Сколько минут клиент делает заказ? " << orderTime << "\n";
	std::cout << "Сколько минут кассир собирает заказ? " << orderAssembly << "\n";
	std::cout << "------ Расчёт времени ------\n";
	
	std::cout << "За смену длиной " << durationShift << " минут кассир успеет обслужить " << totalСlient << " клиентов.\n";

}