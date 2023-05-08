#include <iostream>

void seqsearch(int n, const int s[], int x, int& location)
{
    location = 0;
    while (location < n && s[location] != x)
    {
        location++;
        if (location >= n)
        {
            location = -1;
            break;
        }
    }
}

int main()
{
    const int arr[10] = { 7, 5, 9, 30, 1, 2, 4, 5, 6, 0 };
    int x = 0;
    int location;

    seqsearch(10, arr, x, location);
    std::cout << location << std::endl;
    return 0;
}
