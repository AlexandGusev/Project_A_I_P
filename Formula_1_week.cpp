#include <iostream>
#include<cmath>

int main()
{
    // решение формулы e^(x-2)+|sin(x)|-x^4*cos(1/x)
    float x;
    float ans;
    std::cout << "This app help you with this formul:" << std::endl
        << "e^(x-2)+|sin(x)|-x^4*cos(1/x)" << std::endl
        << "Enter number x" << std::endl;
    std::cin >> x;
    ans = exp(x - 2) + abs(sin(x)) - x * x * x * x * cos(1 / x);
    std::cout << "Answer is " << ans << std::endl;

}