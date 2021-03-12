#include <iostream>
#include <fstream>

float sum(float a, float b);
//Пользователь вводит цены 1 кг конфет и 1 кг печенья. Найдите стоимость: а) одной покупки из 300 г конфет и 400 г печенья; 
//б) трех покупок, каждая из 2 кг печенья и 1 кг 800 г конфет.



int main()
{
    float a;
    float b;
    float c;
    float d;

    std::ofstream fo;
    std::ifstream fi;

    std::cout << "Hello, Dude, please, enter price the 1kg sweets and 1kg cookies:" << std::endl;
    std::cin >> a >> b;
    std::cout << "Ok, how many you wanna buy sweets?" << std::endl;
    std::cin >> c;
    std::cout << "Ok, how many you wanna buy cookies?" << std::endl;
    std::cin >> d;

    fo.open("in.txt");
    fo << a << " " << b << " " << c << " " << d;
    fo.close();

    fi.open("in.txt");
    fi >> a >> b >> c >> d;
    fi.close();
    
    std::cout << "Price of cookies " << sum(a, c) << "$" << std::endl;
    std::cout << "Price of sweets " << sum(b, d) << "$" << std::endl;
}

float sum(float a, float b) {
    return (a * b);
}