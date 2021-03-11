#include <iostream>
#include <string>
#include <cmath>
int main() {
    int a, b;
    double k, v;
    std::string name[3] = { "cup", "tablsp", "teasp" };
    std::cout << "select translations direction:\n";
    for (int i = 0; i < 3; i++)
        std::cout << i + 1 << '.' << name[i] << '\t' << i + 1 << '.' << name[i] << std::endl;
    std::cin >> a >> b;
    std::cout << "enter value: ";
    std::cin >> v;
    k = pow(3, b - 1) + pow(3, a - 1);
    if (a == 3)
        k /= 3 * 12;
    if (b == 3)
        k -= 3;
    std::cout << v << ' ' << name[a - 1] << '=' << v * k << ' ' << name[b - 1];
    return 0;
}