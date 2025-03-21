#include <stdio.h>

int main()
{
    char name[] = "aiman";
    int length = sizeof(name) - 1;

    char nameRev[length];
    for (int i = 0; i < length; i++)
    {
        nameRev[i] = name[length - i - 1];
    }
    nameRev[length] = '\0';

    printf("%s\n", nameRev);

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     char name[] = "aiman";

//     int length = 0;
//     while (name[length] != '\0')
//     {
//         length++;
//     }

//     char temp;
//     for (int i = 0; i < (length - 1) / 2; i++)
//     {
//         temp = name[i];
//         name[i] = name[length - i - 1];
//         name[length - i - 1] = temp;
//     }

//     printf("%s\n", name);

//     return 0;
// }