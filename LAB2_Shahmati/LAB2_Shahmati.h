#include <iostream>
#include <cmath>
using namespace std;

int slonMove()
{
    int a, b, x, y;
    cout << "������������ ������� ����� (1 - 8):" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "������������ ����� �������� (1 - 8):" << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    if (abs(a - x) == abs(b - y))
        cout << "Yes!" << endl;
    else
        cout << "No!" << endl;
    system("pause");
    return 0;
}

void naming()
{
    char player1[30], player2[30];
    cout << "������� ��� ������ 1 � 2:" << endl;
    cout << "����� 1:" << endl;
    cin >> player1;
    cout << "����� 2:" << endl;
    cin >> player2;
}