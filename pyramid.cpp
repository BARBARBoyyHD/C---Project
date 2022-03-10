#include <iostream>

int main()
{
    int row;
    int space;
    std::cout << "Enter How Many Row : ";
    std::cin >> row;
    for (int i  = 1, k = 0; i <= row; i ++, k = 0)
    {
        for (space = 1; space <= row - i; space++)
        {
            std::cout<< "        ";
        }
        while (k != 2*i - 1)
        {
           std::cout <<"*   ";
           k++;
        }
        std::cout << std::endl;
        
        
    }
    return 0;
    
    
}