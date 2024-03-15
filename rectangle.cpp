#include <iostream>
#include <math.h> 
using namespace std;

int main(){
    setlocale(LC_ALL, "Rus");

    double a, b; // инициализация переменных
    do { // цикл do-while проверки ввода переменных
        cout << "Введите 2 стороны прямоугольника(стороны не должны быть равны нулю и отрицательному числу): ";
        cin >> a >> b;
    }
    while (a<=0 || b<=0);
    cout << "Периметр прямоугольника: " << 2*a+2*b << endl; // вывод результата
    cout << "Площадь прямоугольника: " << a*b << endl;
    cout << "Длина диагонали: " << sqrt(a*a+b*b) << endl;
    
    return 0;
}