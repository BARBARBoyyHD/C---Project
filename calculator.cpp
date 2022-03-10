#include <iostream>

void exit()
{
    std::cout << "thanks you for having us";
}

void divisionandreminder()
{
    int a;
    int b;
    char optr;

    std::cout << "first number : ";
    std::cin >> a;
    std::cout << "Operator :";
    std::cin >> optr;
    std::cout << "second number : ";
    std::cin >> b;

    if(optr == '/')
    {
        std::cout<< a / b;
    }
    if(optr == '%')
    {
        std::cout<< a % b;
    }
}

void calc()
{
    double a;
    double b;
    char optr;

    std::cout << "first number : ";
    std::cin >> a;
    std::cout << "Operator : ";
    std::cin >> optr;
    std::cout << "second number : ";
    std::cin >> b;
    

    if (optr == '+')
    {
        std::cout << a + b;
    }
    else if (optr == '-')
    {
        std::cout << a - b;
    }
    else if (optr == '*')
    {
        std::cout << a * b;
    }
    else if (optr == '/')
    {
        std::cout << a / b;
    }
    
}

int main()
{
    int choose;
    std::cout << "0.Exit 1.calculator 2.division and reminder  : ";
    std::cin >> choose;
    switch (choose)
    {
    case 1:
        calc();
        break;

    case 2:
        divisionandreminder();
        break;
    
    case 0:
        exit();
        break;
    }
}