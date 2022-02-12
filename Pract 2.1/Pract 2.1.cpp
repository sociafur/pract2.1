// Pract 2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include <iomanip>
double x;
double Multiply(double x)
{
    if(x>=1.2)
    {
        return exp(-(x + 3));
    }
    else
    {
        return (2 * x + 4);
    }
    
}
void MultiplyAnalog(double x)
{
    double result = Multiply(x);
    std::cout << std::fixed << std::setprecision(4);
    std::cout << result << std::endl;
    std::cin.get();

}

int main()
{
    MultiplyAnalog(1.2);
}

