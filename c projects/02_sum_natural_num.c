#include <stdio.h>

int main()
{
    int n, sum;
    printf("enter the number: ");
    scanf("%d", &n);

    sum = (n * (n + 1)) / 2;

    // sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum = sum + i;
    //     // sum += i;
    // }

    printf("Sum of natural numbers till %d is: %d\n", n, sum);

    return 0;
}