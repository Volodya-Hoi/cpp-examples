// Создание функции и её вызов

#include <iostream>

using namespace std;

void myFunc() { // Создание функции с выводом текста на экран
    cout << "Моя функция была вызвана!" << endl; // вывод
}

// создание функций происходит перед основной функцией - main

int main() {

    myFunc(); // вызов моей функции

    return 0;
}