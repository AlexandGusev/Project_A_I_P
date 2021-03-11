#include <iostream>
//Пользователь вводит число. Выведите на экран квадрат этого числа, куб этого числа.


int main()
{
    float x;
    std::cout << "Enter number: " << std::endl;
    std::cin >> x;
    std::cout << "x^2 = " << x * x << std::endl;
    std::cout << "x^3 = " << x * x * x << std::endl;
    std::getchar();
    std::getchar();

}