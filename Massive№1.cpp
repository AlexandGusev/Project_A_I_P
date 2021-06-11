// Massive№1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <stdlib.h> 
#include <algorithm> 
using namespace std;
void enters();

struct Film
{
    string name;
    string director;
    int price;
    
};
Film F;
int comp1(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}
bool comp2(int a, int b) { return (a > b); }


int main()
{
    

    //1. Сгенерировать массив со случайными числами в диапазоне:
    //[5,15]
    
    const int num = 4;
    int numbers[num];
    int sum3 = 0;
    int sum9 = 0;
    int sum20 = 0;
    int avgsum = 0;
    int max = 0;
    int min = 0;
    
    for (int i = 0; i < num; i++)
    {
        numbers[i] = rand() % 10 + 6;
        cout << numbers[i] << '\t';
    }
        

    for (int i = 0; i < num; i++)  
    {
        numbers[i] = rand() % 10 + 6;
        cout << numbers[i]<< '\t';
    }
    enters();
    //2. Вычислить сумму элементов массива:
    //   больших 9, меньших 20, меньших 3

    
    for (int i = 0; i < num; i++)  
    {
        if (numbers[i]<3)
        {
            sum3 += numbers[i];
        }
        else if (numbers[i] > 9)
        {
            sum9 += numbers[i];
        }
        else if (numbers[i] > 20)
        {
            sum20 += numbers[i];
        }
    }
    cout << "The sum of all the array numbers that are greater than 9 - " << sum9 << endl;
    cout << "The sum of all the array numbers that are greater than 20 - " << sum20 << endl;
    cout << "The sum of all array numbers that are less than 3 - " << sum3 << endl;
    enters();

    //3.Найти среднее арифметическое положительных / отрицательных

    for (int number : numbers) 
    {
        avgsum += number;
    }
    avgsum /= num;
    cout << "arithmetic mean of positive numbers - " << avgsum << endl;
    enters();

    //4. Найти номер минимального/максимального по модулю элемента

    max = numbers[0];
    min = numbers[0];

    for (int i = 0; i<num; i++) 
    {
        if (numbers[i]>max) 
        {
            max = numbers[i];
        }
        else 
        {
            min = numbers[i];
        }

    }
    cout << "minimum number in the array - " << min << endl;
    cout << "maximum number in the array - " << max << endl;

    enters();

    //5. Вывести элементы массива, меньших среднего арифметического
    cout << "Numbers that are less than the arithmetic mean of the array - ";
    for (int i = 0; i<num; i++) 
    {
        if (numbers[i]<avgsum) 
        {
            
            cout << numbers[i] <<' ';
        }
    }

    enters();

    //6.Создать новый массив из двух других массивов путём операций перемножения над элементами массивов
    
    int mass[num];
    for (int i = 0; i < num; i++)
    {
        mass[i] = rand() % 20;
        cout << mass[i] << '\t';
    }
    int nummass[num];
    void enters();
    for (int i = 0; i < num; i++)
    {
        nummass[i] = numbers[i]*mass[i];
        cout << nummass[i] << '\t';
    }
    /*7.Картотека видеотеки организована в виде массива структур с полями : название
        фильма, стоимость, режиссер.Ввести информацию по видеотеке.

        a.вывести информацию о фильмах, начиная с фильма с минимальной
        стоимостью.

        b.вывести информацию о фильмах, которые расположены между фильмами с
        максимальной и минимальной стоимостью.

        c.вывести информацию о количестве режиссеров, чьи фильмы находятся в
        видеотеке и их фамилии.

        d.вывести информацию о фильмах любого одного режиссера.

        e.вывести информацию о фильмах одного режиссера.

        f.вывести информацию о фильмах, стоимость которых больше, чем среднее
        максимальной и минимальной стоимости.

        g.вывести информацию о фильмах по возрастанию стоимости.*/

    //a.
    Film films[10];
    string derectorNames[]{ "Steven Spielberg", "Martin Scorsese", "Alfred Hitchcock", "Stanley Kubrick", "Quentin Tarantino", "Ridley Scott" };
    string filmName[]{"The Godfather","The Shawshank Redemption", "Pulp Fiction", "Goodfellas", "Raiders Of The Lost Ark", "Jaws",
    "The Lord Of The Rings: The Fellowship Of The Ring", "Back To The Future","Blade Runner", "Fight Club"};
    for (int i = 0; i<10; i++) 
    {
        films[i].price = rand() % 200000+100000;
        
    }
    for (int i = 0; i<10; i++) 
    {
        films[i].director = derectorNames[rand()%6];
    }
    for (int i = 0; i < 10; i++)    
    {
        srand(i+i*i-2*sqrt(i+i*0.25));
        films[i].name = filmName[rand() % 10];
    }

    for (int i = 0; i<9; i++) 
    {
        for (int j = 8; j>=i; j--) 
        {
            if (films[j].price>films[j+1].price) 
            {
                F = films[j];
                films[j] = films[j + 1];
                films[j + 1] = F;
            }
        }
    }
    enters();
    //b
    for (int i = 0; i<10; i++) 
    {
        if (i>0 && i<9) 
        {
            cout << '"' << films[i].name << '"' << ", Derector - " << films[i].director << ", Budget - " << films[i].price << '$' << endl;
        }
    }
}

void enters() 
{
    cout << endl;
    cout << endl;
}


