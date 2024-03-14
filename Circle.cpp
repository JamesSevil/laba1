#include <iostream>
using namespace std;
#define PI 3.14

int main() {
    setlocale(LC_ALL, "Rus");
    int radius;
    int angle;
    int angle1; 

    cout << "Введите радиус окружности: ";
    cin >> radius;

    while (radius < 0){    
        cout << "Радиус должен быть положительным числом" << "\n" << "Введите радиус окружности верно: ";
        cin >> radius;
    }

    cout << "Введите угол для вычисления площади сектора: ";
    cin >> angle;

    angle1 = angle;

    if (angle < 0) angle -= angle * 2;

    float lenght = 2 * PI * radius;
    float square = PI * radius * radius;
    float sector_square = (PI * radius * radius) / 360 * angle;
    
    cout << "Длина окружности: " << lenght << "\n" << "Площадь окружности: " << square << "\n" << "Площадь сектора окружности с углом " << angle1 << " градусов: " << sector_square << endl;

    return 0;
}
