﻿// Cycles_№2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#include<cmath>

//Протабулировать функцию(шаг и диапазон задаёт пользователь) :
//y = (2+x)^2 + 3x



int main()
{
    float dx, xs, xf;
    const float eps = 0.00000001;
    std::cout << "Enter diapason [xs ; xf]" << std::endl;
    std::cin >> xs >> xf;
    
    std::cout << "Enter dx" << std::endl;
    std::cin >> dx;

    std::cout << "\tx\t\ty" << std::endl;

    std::cout.precision(4);

    float f;
    float x = xs;
    while (x <= xf) {
        f = (2 + x) * (2 + x) + 3 * x;
        std::cout << "\t"
            << x
            << "\t\t"
            << f
            << std::endl;
        x += dx;

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
