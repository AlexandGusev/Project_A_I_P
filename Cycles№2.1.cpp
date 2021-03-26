#include <iostream>
#include <iomanip>
#include<cmath>

//Протабулировать функцию(шаг и диапазон задаёт пользователь) :
//y = sqrt(5x+4x^3) + 4x+3/sin(9x+71)



int main()
{
    float dx, xs, xf;
    std::cout << "Enter diapason [xs ; xf]" << std::endl;
    std::cin >> xs >> xf;

    std::cout << "Enter dx" << std::endl;
    std::cin >> dx;

    std::cout << "\tx\t\ty" << std::endl;

    std::cout.precision(4);

    float f;
    float x = xs;
    while (x <= xf) {
        f = sqrt(5*x + pow(4*x,3)) + 4*x + 3/(sin(9*x + 71));
        std::cout << "\t"
            << x
            << "\t\t"
            << f
            << std::endl;
        x += dx;

    }
}