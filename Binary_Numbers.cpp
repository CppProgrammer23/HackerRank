#include <iostream>

int main()
{
    int n; std::cin >> n;
    int maxval = 0, temp = maxval;
    while(n)
    {
        if(n & 1)
            maxval++;
        else
        {
             if(maxval>temp)
                temp = maxval; 
            maxval = 0;  
        }
        n >>= 1;
    }
    if(maxval > temp)
        std::cout << maxval;
    else 
        std::cout << temp;
    return 0;
}
