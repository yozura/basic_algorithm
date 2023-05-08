#include <iostream>

void exchange(int n, int s[])
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (s[j] < s[i])
            {
                int temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }
    }
}

int main()
{
    int arr[5] = { 5, 3, 4, 1, 2 };
    exchange(5, arr);
    for (int i = 0; i < 5; ++i)
    {
        std::cout << arr[i] << std::endl;
    }
    return 0;
}
