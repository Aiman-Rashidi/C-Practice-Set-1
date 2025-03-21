#include <stdio.h>

int findMax(int arrPassed[], int sizePassed)
{
    int max = arrPassed[0];

    for (int i = 0; i < sizePassed; i++)
    {
        if (arrPassed[i] > max)
        {
            max = arrPassed[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Max: %d\n", findMax(arr, size));

    return 0;
}