#include <iostream>
int main(){
    int pas = 0;
    int ticket = 20;
    int salary = 0;
    int pasOut;
    int pasIn;
//� ������������� � ������� ������� "���������� ������ ����������".
//����� ������� ������� � ����������� "����� �����" � "�������� �����", 
//������ ��������� ������, �� ��� ���������� ���� � ����� �������� �� ���.
    int driverPay;
    int gasPay;
    int taxes;
    int repair;
    int balance;

    std::string firstStop = "����� �������������";
    std::string secondStop = "�������� ����������";
    std::string thirdStop = "������� �������";
    std::string fourthStop = "���������� �������";

//���, ����� ��� ������ ������ �������� ��������� ��������� - � ���� ����� ������ ��� ������� � �����, �� ��� ��� �� ���������.
    std::cout << "��������� �� ��������� �" << firstStop << "�. � ������ ����������: " << pas << "\n";
    std::cout << "������� ���������� ����� �� ���������? ";
    std::cin >> pasOut;
    std::cout << "������� ���������� ����� �� ���������? ";
    std::cin >> pasIn;
    pas += (pasIn - pasOut);
    salary += ticket * pasIn;
    std::cout << "������������ � ��������� �" << firstStop << "�. � ������ ����������: " << pas << "\n";
    std::cout << "-----------����-----------\n";

    std::cout << "��������� �� ��������� �" << secondStop << "�. � ������ ����������: " << pas << "\n";
    std::cout << "������� ���������� ����� �� ���������? ";
    std::cin >> pasOut;
    std::cout << "������� ���������� ����� �� ���������? ";
    std::cin >> pasIn;
    pas += (pasIn - pasOut);
    salary += ticket * pasIn;
    std::cout << "������������ � ��������� �" << secondStop << "�. � ������ ����������: " << pas << "\n";
    std::cout << "-----------����-----------\n";

    std::cout << "��������� �� ��������� �" << thirdStop << "�. � ������ ����������: " << pas << "\n";
    std::cout << "������� ���������� ����� �� ���������? ";
    std::cin >> pasOut;
    std::cout << "������� ���������� ����� �� ���������? ";
    std::cin >> pasIn;
    pas += (pasIn - pasOut);
    salary += ticket * pasIn;
    std::cout << "������������ � ��������� �" << thirdStop << "�. � ������ ����������: " << pas << "\n";
    std::cout << "-----------����-----------\n";

    std::cout << "��������� �� �������� ��������� �" << fourthStop << "�. � ������ ����������: " << pas << "\n";
    std::cout << "�������� " << pas << " ����������.\n";
    std::cout << "--------------------------\n";


    std::cout << "����� ����������: " << salary << " ���.\n";
    driverPay = salary/4;
    std::cout << "�������� ��������: " << driverPay << " ���.\n";
    gasPay = salary/5;
    std::cout << "������� �� �������: " << gasPay << " ���.\n";
    taxes = salary/5;
    std::cout << "������: " << taxes << " ���.\n";
    repair = salary/5;
    std::cout << "������� �� ������ ������: " << repair << " ���.\n";

    balance = salary - driverPay - gasPay - taxes - repair;
    std::cout << "����� �����: " << balance << " ���.\n";

}