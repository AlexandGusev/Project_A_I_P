﻿// Cycles_№3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>  

//Пользователь задаёт число Ч и Х.Посчитать y :
//y = -1/(7x) + 2/(8x) - 3/(9*x) + ±(…)/Ч*x

void fx(float b, float p, int Y, float o) {
    for (int i = 7; i <= Y; i++) {
        if (i % 2 == 1) {
            b = ((i - 6) / (i * p)) * (-1);
        }
        else {
            b = (i - 6) / (i * p);
        }

        o += b;
    }
    std::cout << "Answer is " << o << std::endl;
}

int main()
{
    int A;
    float x;


    std::cout << "Enter X " << std::endl;
    std::cin >> x;

    std::cout << "Enter A more then 7 " << std::endl;
    std::cin >> A;

    std::cout.precision(3);

    float y=0;
    float a = 0;

    if (x == 0) {
        std::cout << "Divide on zero" << std::endl;
    }
    if (A < 7) {
        std::cout << "Please, enter another number A" << std::endl;
    }
    else {
        fx(y, x, A, a);

        
    }    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
