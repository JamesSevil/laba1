
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    /// Периметр треугольника
    cout << "Введите стороны треугольника:\n";

    cout << "Сторона А = ";
    int sideA = 0;
    cin >> sideA;// Ввод переменной

    cout << "Сторона B = ";
    int sideB = 0;
    cin >> sideB;// Ввод переменной

    cout << "Сторона C = ";
    int sideC = 0;
    cin >> sideC;// Ввод переменной

    cout << "Периметр треугольника = " << sideA + sideB + sideC;

    ///   площадь по формуле Герона
    int Ploshad = sideA + sideB + sideC;
     // по формуле SQRT(P*(P-A)*(P-B)*(P-C))
    cout << "\nПлощадь по формуле Герона = " << (sqrt(Ploshad * (Ploshad - sideA) * (Ploshad - sideB) * (Ploshad - sideC)));

    ///   Равнобедренный треугольник ли
    // цикл с нахождением двух одинаковых переменных если есть одинаковые то true
    if (sideA == sideC || sideB == sideC || sideA == sideB)
    {
        cout << "\nТреугольник равнобедренный";
    }
    else {
        cout << "\nТреугольник неравнобедренный ";
    }

}
