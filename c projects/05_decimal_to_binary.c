#include <stdio.h>

int main()
{
    int n = 12;
    int rem;
    int a[10];

    int i = 0;
    // for (i = 0; i < 4; i++)
    // {
    //     rem = n % 2;
    //     n = n / 2;
    //     a[i] = rem;
    // }
    while (n != 0)
    {
        rem = n % 2;
        n = n / 2;
        a[i] = rem;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }

    return 0;
}