// Цикл for

#include <iostream>

using namespace std;

int count; // Обозначение переменной для предела цикла 

int main() {

    cout << "Введите число: " << endl; // Ввод значения для предела
    cin >> count;

    for (int i = 0; i < count; i++) // Цикл for - выполняется n-е кол-во раз, в этом примере он 
    {                               // выполняется столько раз,сколько требуется для выполнения
        cout << "Я выполнился " + to_string(i) + " раз!" << endl; // условия, т.е пока значение
    }                                                       // i меньше указанного 

    cout << "Цикл окончен!" << endl; // сообщение об окончании цикла
    
    return 0;
}