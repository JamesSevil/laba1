#include <iostream>
using namespace std;
#define PI 3.14

int main(){
    setlocale(LC_ALL, "Rus");
    int radius;
    int angle;

    cout << "Введите радиус окружности: ";
    cin >> radius;

    cout << "Введите угол для вычисления площади сектора: ";
    cin >> angle;

    float lenght = 2 * PI * radius;
    float square = PI * radius * radius;
    float sector_square = (PI * radius * radius) / 360 * angle;

    cout << "Длина окружности: " << lenght << "\n" << "Площадь окружности: " << square << "\n" << "Площадь сектора окружности с углом " << angle << " градусов: " << sector_square << endl;

    return 0;
}