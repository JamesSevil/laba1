#include <iostream>
#include <math.h> 
using namespace std;

int main(){
    setlocale(LC_ALL, "Rus");

    int a, b;
    do {
        cout << "Введите 2 стороны прямоугольника(стороны не должны быть равные): ";
        cin >> a >> b;
    }
    while (a==b);
    cout << "Периметр прямоугольника: " << 2*a+2*b << endl;
    cout << "Площадь прямоугольника: " << a*b << endl;
    cout << "Длина диагонали: " << sqrt(a*a+b*b) << endl;
    
    return 0;
}
