﻿#include <iostream>
#include <iomanip>
#include <math.h>
//Пользователь вводит параметры фигуры. Найти периметр и площадь ромба

int main()
{
    int d1;
    int d2;
    std::cout << "This app calculates the perimeter and area of the rhombus:\n";
    std::cout << "Enter the first diagonal:";
    std::cin >> d1;
    std::cout << "Enter the second diagonal:";
    std::cin >> d2;

    float plo = (d1 * d2) / 2;
    float per = 4 * sqrt((d1 / 2) * (d1 / 2) + (d2 / 2) * (d2 / 2));
    std::setprecision(3);
    std::cout << "Perimeter is " << per << std::endl
        << "Area is " << plo << std::endl;
    return 0;


}