#include <iostream>

int binsearch(int* s, int key, int begin, int end)
{
    while (end - begin > 0)
    {
        int mid = (end + begin) / 2;
        if (s[mid] < key)
        {
            begin = mid + 1;
        }
        else if (s[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }

    return -1;
}

int main()
{
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int answer = binsearch(arr, 1, 0, 10);
    std::cout << answer << std::endl;
    return 0;
}

