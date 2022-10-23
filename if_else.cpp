// Использование условий в C++
#include <iostream>

using namespace std;

int var; // обозначение переменной числа, которую мы будем вводить

int main() {

    cout << "Введите число: " << endl; // Ввод числа
    cin >> var;

    if ( var > 0 && var != 0 ) // if - проверка на условие. Такое условие может быть одно в конструкции
    {                          // одного условия
        cout << "Число положительное!" << endl; 
    }
    else if ( var < 0 && var != 0 ) // else if - проверка на это условие выполняется в случае если 
    {                               // первое условие не подошло. Таких условий может быть много
        cout << "Число отрицательное!" << endl;
    }
    else // else - выполняется лишь если ни одно из условий не подошло. Так же может быть только одно
    {    // в конструкции условия
        cout << "Число равно нулю! (или введеное значение не является целым числом)" << endl;
    }

    return 0;
}