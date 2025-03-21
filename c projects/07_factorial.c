#include <stdio.h>

int factorialIterative(int n)
{
    int factorial = 1; // also covers the value of factorial of 0 and 1
    for (int i = n; i > 1; i--)
    {
        factorial *= i;
    }
    return factorial;
}

int factorialRecursive(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorialRecursive(n - 1);
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    // int factorial = factorialIterative(n);
    int factorial = factorialRecursive(n);
    printf("%d\n", factorial);

    return 0;
}