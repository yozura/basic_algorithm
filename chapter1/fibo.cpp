#include <iostream>

int fibo(int n)
{
    if (n <= 1) return n;
    else return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    std::cout << fibo(10) << std::endl;

    return 0;
}
