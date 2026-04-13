// Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

// For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int first_digit = n / 1000;
    if (first_digit % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}

// For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int last_digit = n % 10;
//     printf("%d", last_digit);
//     return 0;
// }

