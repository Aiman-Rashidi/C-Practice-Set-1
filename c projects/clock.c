#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int hour, minute, second;
    hour = minute = second = 0;

    system("cls");

    while (1)
    {
        printf("\r");
        printf("%02d : %02d : %02d", hour, minute, second);
        fflush(stdout);
        second++;

        if (second == 60)
        {
            minute += 1;
            second = 0;
        }
        if (minute == 60)
        {
            hour += 1;
            minute = 0;
        }
        if (hour == 24)
        {
            hour = 0;
            minute = 0;
            second = 0;
        }
        Sleep(1000);
    }

    return 0;
}