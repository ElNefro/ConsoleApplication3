#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");

    int a;
    int b = 0;
    std::cout << "Введите  число: \n";
    std::cin >> a;
    while (a != 0)
    {
       b += a;
       std::cin >> a;
    }
    std::cout << "Сумма: " << b;
}


