#include <iostream>
#include <conio.h>  // Для використання _getch()
using namespace std;

int main()
{
    cout << "Hello!" << endl;  // endl – перехід на новий рядок
    cout << "I am an industrial college student" << endl;  // Виправлено cout
    int a, b;
    cout << "Enter an integer (a): ";
    cin >> a;
    cout << "Enter an integer (b): ";
    cin >> b;
    cout << a << " + " << b << " = " << a + b << endl;

    _getch();  // Очікування натискання клавіші перед завершенням програми

    return 0;
}

