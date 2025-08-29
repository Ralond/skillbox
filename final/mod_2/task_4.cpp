#include <iostream>



int main() {
	setlocale(LC_ALL, "RU");

	int totalPrise = 4000000;
	int entrancesCount = 2;
	int apartmentsCount = 20;
	int separatePrise = totalPrise / (entrancesCount * apartmentsCount);

	std::cout << "Приветствуем вас в калькуляторе квартплаты!\n";
	std::cout << "-------------------------------------------\n";

	std::cout << "Введите сумму, указанную в квитанции: " << totalPrise << "\n";
	std::cout << "Сколько подъездов в вашем доме? " << entrancesCount << "\n";
	std::cout << "Сколько квартир в каждом подъезде? " << apartmentsCount << "\n";
	std::cout << "----Считаем-----\n";
	
	std::cout << "Каждая квартира должна платить по " << separatePrise << " руб.\n";

}