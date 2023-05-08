#include <iostream>

void binsearch(int n, const int s[], int x, int& location)
{
    int mid;
    int low = 1;
    int high = n;
    location = 0;

    while (low <= high && location == 0)
    {
        mid = (low + high) / 2;
        if (x == s[mid]) location = mid;
        else if (x > s[mid]) low = mid + 1;
        else high = mid - 1;
    }
}

int main()
{
    int arr[10] = { 5, 9, 30, 40, 45, 108, 121, 133, 199, 999 };
    int x = 108;
    int location;
    binsearch(10, arr, x, location);
    std::cout << location << std::endl;
    return 0;
}
