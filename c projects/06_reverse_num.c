#include <stdio.h>

int sizeCount(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        n = -n;
    }
    int count = 0;
    while (n)
    {
        n = n / 10;
        count++;
    }
    return count;
}

int main()
{
    int n = 12345;
    int rev = 0;

    int size = sizeCount(n);
    int a[size];

    for (int i = 0; i < size; i++)
    {
        int last = n % 10;
        // printf("last : %d\n", last);
        rev = rev * 10 + last;
        // printf("Rev : %d\n", rev);
        n = n / 10;
    }

    printf("reversed number : %d", rev);

    return 0;
}