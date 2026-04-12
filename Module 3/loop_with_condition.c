// #include <stdio.h>
// int main()
// {
//     int n = 14;
//     if (n % 2 == 0)
//     {
//         printf("Even Number");
//     }
//     else
//     {
//         printf("Odd Number");
//     }
// }

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d - is Even\n", i);
        }
        else
        {
            printf("%d - is Odd\n", i);
        }
    }
}