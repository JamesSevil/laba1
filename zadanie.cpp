#include <iostream>
#include <math.h> 
using namespace std;

int main(){
    setlocale(LC_ALL, "Rus");

    cout << "Введите 2 стороны прямоугольника: " << endl;
    int a, b;
    cin >> a >> b;
    cout << "Периметр прямоугольника: " << 2*a+2*b << endl;
    cout << "Площадь прямоугольника: " << a*b << endl;
    cout << "Длина диагоняли: " << sqrt(a*a+b*b) << endl;
    
    return 0;
}