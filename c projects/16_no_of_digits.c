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
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return count;
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("Size: %d\n", sizeCount(n));

    return 0;
}