#include <iostream>
#include <cmath>
using namespace std;

int slonMove()
{
    int a, b, x, y;
    cout << "Расположение фигурки слона (1 - 8):" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "Расположение точки проверки (1 - 8):" << endl;
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
    cout << "Ввидите имя игрока 1 и 2:" << endl;
    cout << "Игрок 1:" << endl;
    cin >> player1;
    cout << "Игрок 2:" << endl;
    cin >> player2;
}