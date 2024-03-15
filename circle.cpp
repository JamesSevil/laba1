#include <iostream>
using namespace std;
#define PI 3.14 // ввод константы PI

int main() {
    setlocale(LC_ALL, "Rus");
    int radius; //радиус окружности
    int angle; // угол, для вычисления площади сектора окружности
    int angle1; // переменная, сохраняющая в себе значение angle, для передачи в конечный ответ отрицательного угла

    cout << "Введите радиус окружности: ";
    cin >> radius; // ввод радиуса

    while (radius <= 0){    
        cout << "Радиус должен быть положительным числом" << "\n" << "Введите радиус окружности верно: ";
        cin >> radius; // ввод радиуса, если введённый ранее радиус был не положительным
    }

    cout << "Введите угол для вычисления площади сектора: ";
    cin >> angle; // ввод угла 

    angle1 = angle;

    if (angle < 0) angle -= angle * 2; // перевод значения угла из отрицательного в положительное

    float lenght = 2 * PI * radius; // формула длины окружности
    float square = PI * radius * radius; // формула площади окружности
    float sector_square = (PI * radius * radius) / 360 * angle; // формула площади сектора окружности
    
    cout << "Длина окружности: " << lenght << "\n" << "Площадь окружности: " << square << "\n" << "Площадь сектора окружности с углом " << angle1 << " градусов: " << sector_square << endl;
    // <--- вывод ответа
    return 0;
}
