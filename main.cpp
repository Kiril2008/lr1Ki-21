#include <iostream>
#include <conio.h>
#include<windows.h>

using namespace std;

int main(){

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a, b;
    cout << " Введіть ціле число (a): ";
    cin >> a;
    cout << " Введіть ціле число (b): ";
    cin >> b;

    cout << "Сума: " << a << " + " << b << " = " << a + b << endl;
    if (b != 0) {
        cout << "Частка: " << a << " / " << b << " = " << a / b << endl;
        cout << "Остача: " << a % b << endl;
        cout << "Різниця частки та остачі: " << a / b - a % b << endl;
        cout << "Добуток частки та остачі: " << a / b * a % b << endl;
    } else {
        cout << "Помилка! ділення на нуль!" << endl;
    }

    _getch();
    return 0;
}
