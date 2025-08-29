#include <iostream>



int main() {

	int prise;
	int priseDelivery;
	int sale;
	int totalPrise;

	std::cout << "Программа расчёта окончательной цены\n";
	std::cout << "------------------------------------\n";

	std::cout << "Введите стоимость товара: ";
	std::cin >> prise;

	std::cout << "Введите стоимость доставки: ";
	std::cin >> priseDelivery;

	std::cout << "Введите скидку: ";
	std::cin >> sale;
	
	totalPrise = prise + priseDelivery - sale;
	std::cout << "Итого сумма к оплате: " << totalPrise << "\n";

}