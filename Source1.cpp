
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    /// �������� ������������
    cout << "������� ������� ������������:\n";

    cout << "������� � = ";
    int sideA = 0;
    cin >> sideA;

    cout << "������� B = ";
    int sideB = 0;
    cin >> sideB;

    cout << "������� C = ";
    int sideC = 0;
    cin >> sideC;

    cout << "�������� ������������ = " << sideA + sideB + sideC;

    ///   ������� �� ������� ������
    int Ploshad = sideA + sideB + sideC;
    cout << "\n������� �� ������� ������ = " << (sqrt(Ploshad * (Ploshad - sideA) * (Ploshad - sideB) * (Ploshad - sideC)));

    ///   �������������� ����������� ��
    if (sideA == sideC || sideB == sideC || sideA == sideB)
    {
        cout << "\n���������� ��������������";
    }
    else {
        cout << "\n���������� ���������������� ";
    }

}
