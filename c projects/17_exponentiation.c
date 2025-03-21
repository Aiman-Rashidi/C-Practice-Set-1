#include <stdio.h>

int main()
{
    int base, power;
    long long int result = 1;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the power: ");
    scanf("%d", &power);

    for (int i = 0; i < power; i++)
    {
        result = result * base;
    }

    printf("\n%d to the power %d is: %lld\n\n", base, power, result);

    return 0;
}