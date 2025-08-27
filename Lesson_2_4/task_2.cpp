#include <iostream>



int main() {

	int prise;
	int priseDelivery;
	int sale;
	int totalPrise;

	std::cout << "Программа расчёта окончательной цены\n";
	std::cout << "------------------------------------\n";
	//В задании было сказано, что нужно имитировать ввод данных - поэтому присваиваю значения переменным после их объявления
	prise = 10;
	std::cout << "Введите стоимость товара: " << prise << "\n";

	priseDelivery = 5;
	std::cout << "Введите стоимость доставки: " << priseDelivery << "\n";

	sale = 2;
	std::cout << "Введите скидку: " << priseDelivery << "\n";
	
	totalPrise = prise + priseDelivery - sale;
	std::cout << "Итого сумма к оплате: " << totalPrise << "\n";

}