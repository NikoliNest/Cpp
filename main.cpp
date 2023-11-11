#include <iostream>     // Подключаем стандартную библиотеку ввода-вывода

int main()              // Тело основной программы
{
    double f1 = 0.0;           // Первое число Фибоначчи - 0, в формате числа с плавающей точкой двойной точности.
    double f2 = 1.0;           // Второе число Фибоначчи - 1, в формате числа с плавающей точкой двойной точности.
    double f3 = (f1 + f2);     // Сумма предыдущих двух чисел.
    double f4 = (f2 + f3);     // ...и снова...
    double f5 = (f3 + f4);     // ...и снова.

    std::cout<<"Fibonacchi number 1 :"<<f1<<std::endl; // Вывод в стандартный поток - в консоль.
    std::cout<<"Fibonacchi number 2 :"<<f2<<std::endl; // ...и снова...
    std::cout<<"Fibonacchi number 3 :"<<f3<<std::endl; // ...и снова...
    std::cout<<"Fibonacchi number 4 :"<<f4<<std::endl; // ...и снова...
    std::cout<<"Fibonacchi number 5 :"<<f5<<std::endl; // ...и снова.
}