// #include<stdio.h>
// int main()
// {
//     printf("I Love Practice");
//     return 0;

// }

// #include <stdio.h>
// int main()
// {
//     int a;
//     int b;
//     scanf("%d %d", &a, &b);
//     int sum = a + b;
//     printf("%d", sum);
// }

// #include <stdio.h>
// int main()
// {
//     int A;
//     long long int B;
//     double C;
//     char D;
//     scanf("%d %lld %lf %c", &A, &B, &C, &D);
//     printf("%d\n%lld\n%.2lf\n%c", A, B, C, D);

//     return 0;
// }

// Statement I know and you also know that you love practice day so much. So this task is for you. You will be given a positive integer N, you need to print "I Love Practice" N times.



// Here positive integer means those integers that are greater than 0.

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n ; i++)
//     {
//         printf("I Love Practice\n");
//     }
// }

// Statement You will be given a positive integer N, you need to print from 1 to N and besides the value, print Yes or No Print Yes if the value is divisible by 5 and print No otherwise.

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if(i % 5 == 0){
            printf("%d Yes\n", i);
        }
        else 
        {
            printf("%d No\n", i);
        }
    }
}