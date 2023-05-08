#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, x;
    int* arr;

    std::cin >> n >> x;
    if (n <= 0)
    {
        return 1;
    }
    
    srand(time(0));
    arr = new int[n];
    for (int i = 0; i < n; ++i)
    {
        arr[i] = rand() % n + 1;
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == x)
        {
            std::cout << "Found : " << x << ", Index : " << i << std::endl;
        }
    }
    
    return 0;
}
