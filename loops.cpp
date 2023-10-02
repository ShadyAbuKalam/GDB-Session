#include <iostream>

int evenCount(int top)
{
    int evenCount = 0;

    for (int index = 0; index < top; index++)
    {
        if (evenCount % 100 == 0)
            std::cout << "Horray, one hundred more !!" << std::endl;
        
        evenCount++;
    }

    return evenCount;
}


int main()
{
    evenCount(10000);
    return 0;
}