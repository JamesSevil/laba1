

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");

    /// �������� ������������
   /// int Perimetr = 0;
    std::cout << "������� ������� ������������:";

    std::cout << "������� � = ";
    int sideA = 0;
    std::cin >> sideA;

    std::cout << "������� B = ";
    int sideB = 0;
    std::cin >> sideB;

    std::cout << "������� C = ";
    int sideC = 0;
    std::cin >> sideC;

    std::cout << "�������� ������������ = " << sideA + sideB + sideC;

    ///   ������� �� ������� ������
    int Ploshad = sideA + sideB + sideC;
    std::cout << "������� �� ������� ������ = " << sqr(Ploshad * (Ploshad - a) * (Ploshad - b) * (Ploshad - sideC));
    ///   �������������� ����������� ��
    std::cout << "���������� �������������� = ";

}
