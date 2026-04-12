// #include<stdio.h>
// int main()
// {
//     printf("Hello, world! I am learning C programming language. ^_^\n");
//     printf("Programming is fun and challenging. /\\/\\/\\\n");
//     printf("I want to give my 100%% dedication to learn!\tI will succeed one day.");
//     return 0;
// }

// You will be given two integers A and B. You need to give output their multiplication.

// Input Format

// Input will contain A and BConstraints

// -10^9 <= A,B <= 10^9Output Format

// Output the multiplication
// Sample Input 0

// 10 50
// Sample Output 0

// 500
// Sample Input 1

// 10000000 10000000
// Sample Output 1

// 100000000000000

// #include<stdio.h>
// int main()
// {
//     int A;
//     int B;
//     scanf("%d %d", &A, &B);
//     int mul = A * B;
//     printf("%d", mul);
// }

// #include <stdio.h>
// int main()
// {
//     int A;
//     int B;
//     scanf("%d %d", &A, &B); 
//     long long int mul = (long long int)A * B; // Use long long to prevent overflow
//     printf("%lld", mul); // Use %lld for long long output
// }

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     {
//         if(n % 3 == 0){
//             printf("Yes", n);
//         }
//         else 
//         {
//             printf("No", n);
//         }
//     }
// }

// Problem Statement

// You will be given a non-negative integer N, you need to tell if this number is divisible by 3 or not. If it is divisible by 3 output "YES" otherwise output "NO" without the quotation mark.

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     {
//         if(n % 3 == 0){
//             printf("YES");
//         }
//         else 
//         {
//             printf("NO");
//         }
//     }
// }

// Problem Statement

//You will be given a non-negative integer N, you need to print all numbers from 1 to N that are divisible by both 3 and 7.


// Input Format

// Input will contain N.
// Constraints

// 21 <= N <= 10000
// Output Format

// Output all numbers from 1 to N that are divisible by both 3 and 7. Don't forget to print a new line after every number.
// Sample Input 0

// 30
// Sample Output 0

// 21
// // Sample Input 1

// 50
// // Sample Output 1

//21
//42
// Sample Input 2

// 100
// // Sample Output 2

//21
//42
//63
//84

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         if(i % 3 == 0 && i % 7 == 0){
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }

// Problem Statement

// Alisa and you have gone out for shopping, and Alisa wants to buy a new pair of shoes for Eid. She has enough money to buy anything. However, Alisa will only buy shoes if you also buy a pair. And you will buy a pair of shoes if you can buy a Punjabi. That means, everything is depending on the Punjabi.

// You have decided that you will buy a Punjabi only if you have more than 1000 Taka. After purchasing the Punjabi the amount of your money will be reduced by 1000. Suppose you have 1600 taka with you, after buying the Punjabi you will have 600 taka left with you.

// Then you will only buy shoes if you have 500 Taka or more left with you. That means, if you can't buy your Punjabi you can't buy shoes.

// Now if I inform you the amount N Taka that your mother will give you, can you tell me what will happen next?

// If you buy a punjabi print "I will buy Punjabi".

// If you buy a pair of shoes print "I will buy new shoes"

// If Alisa buy a pair of shoes print "Alisa will buy new shoes"

// If no one can buy anything print "Bad luck!"

// Note: Don't forget to print new line after every line you print.

// Input Format

// Input will contain a non-negative integer N.
// Constraints

// 1 <= N <= 2^31
// Output Format

// Output the events that will happen as asked in the question.
// Sample Input 0

// 1000
// Sample Output 0

// Bad luck!
// Sample Input 1

//1450
// Sample Output 1

// I will buy Punjabi
// Sample Input 2

// 1500
// Sample Output 2

// I will buy Punjabi
// I will buy new shoes
// Alisa will buy new shoes

#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);    
    if(n > 1000){
        printf("I will buy Punjabi\n");
        n -= 1000;
        if(n >= 500){
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else {
        printf("Bad luck!\n");
    }
}
// onno kunu vabe ki kora jeto?
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n > 1000){
        printf("I will buy Punjabi\n");
        n -= 1000;
        if(n >= 500){
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else {
        printf("Bad luck!\n");
    }
}
