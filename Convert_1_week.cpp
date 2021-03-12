﻿#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

//Сделать конвертер величин. Формат ввода: Направление_Перевода Величина.
//Кулинария (чайная, столовая, кружка)


int main() {
    int a, b;
    double k, v;
    std::string name[3] = { "cup", "tablsp", "teasp" };
    std::cout << "select translations direction:\n";
    for (int i = 0; i < 3; i++)
        std::cout << i + 1 << '.' << name[i] << '\t' << i + 1 << '.' << name[i] << std::endl;


    std::cin >> a >> b;
    std::ofstream fo;
    std::ifstream fi;

    
    std::cout << "enter value: ";
    std::cin >> v;

    fo.open("in.txt");
    fo << v;
    fo.close();

    fi.open("in.txt");
    fi >> v;
    fi.close();

    k = pow(3, b - 1) + pow(3, a - 1);
    if (a == 3)
        k /= 3 * 12;
    if (b == 3)
        k -= 3;
    std::cout << v << ' ' << name[a - 1] << '=' << v * k << ' ' << name[b - 1];
    return 0;
}