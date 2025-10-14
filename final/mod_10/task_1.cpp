#include <iostream>
#include <cmath>
int main()
{
  float a, b, c;
  std::cout << "a, b, c:";
  std::cin >> a >> b >> c;  //не хватает >> c
  if (a == 0) //если a == 0 - это не квадратное уравнение
  { 
    std::cout << "Not a quadratic equation!" << std::endl;
  }
  else // убрал второе условие
  {
    float discriminant = b * b - 4 * a * c; // ошибка в формуле
    // return 0; - ошибка, не нужно завершать программу
    if (discriminant > 0) // ошибка, должно быть > 0
    {
      float x1 = (-b + std::sqrt(discriminant)) / (2 * a); // ошибка discriminand
      float x2 = (-b - std::sqrt(discriminant)) / (2 * a); // ошибка в формуле, discriminand и ";"
      std::cout  << "Root 1, 2: " << x1 << ", " << x2 << std::endl; // ошибка, два раза x1
    }
    else if (discriminant == 0)
    {
      float x = -b / (2 * a); // ошибка в формуле
      std::cout << "Root: " << x << std::endl; // ошибка, нужно вывести x
    }
    else
    {
      std::cout << "Complex scenario is not supported!" << std::endl;
    }
  }
}