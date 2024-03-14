

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");

    /// Периметр треугольника
   /// int Perimetr = 0;
    std::cout << "Введите стороны треугольника:";

    std::cout << "Сторона А = ";
    int sideA = 0;
    std::cin >> sideA;

    std::cout << "Сторона B = ";
    int sideB = 0;
    std::cin >> sideB;

    std::cout << "Сторона C = ";
    int sideC = 0;
    std::cin >> sideC;

    std::cout << "Периметр треугольника = " << sideA + sideB + sideC;

    ///   площадь по формуле Герона
    int Ploshad = sideA + sideB + sideC;
    std::cout << "Площадь по формуле Герона = " << sqr(Ploshad * (Ploshad - a) * (Ploshad - b) * (Ploshad - sideC));
    ///   Равнобедренный треугольник ли
    std::cout << "Треуголник равнобедренный = ";

}
