// Problem Statement

// You will be given a positive integer N. You need to print "I Want More Assignments" N times without the quotation mark. Also print from 1 to N with it. See the sample input output for more clarifications.

// Input Format

// Input will contain only N.
// Constraints

// 1 <= N <= 10^5
// Output Format

// Output "I Want More Assignments" N times along with 1 to N and don't forget to print new line after it.
// Sample Input 0

// 5
// Sample Output 0

// 1. I Want More Assignments
// 2. I Want More Assignments
// 3. I Want More Assignments
// 4. I Want More Assignments
// 5. I Want More Assignments

// #include<stdio.h>
// int main()
// {
//     int N;
//     scanf("%d", &N);
//     for (int i = 1; i <= N; i++)
//     {
//         printf("%d. I Want More Assignments\n", i);
//     }
//     return 0;
// }

// Problem Statement

// You will be given an integer N. If N is a positive number then print from 1 to N, otherwise print from N to 0.

// Note: A positive number is a number that is strictly greater than 0.

// Input Format

// Input will contain only N.
// Constraints

// -10^5 <= N <= 10^5
// Output Format

// Output as asked in the question and don't forget to put a space between the values.
// Sample Input 0

// 5
// Sample Output 0

// 1 2 3 4 5 
// Sample Input 1

// -4
// Sample Output 1

// -4 -3 -2 -1 0 

// #include <stdio.h>
// int main()
// {
//     int N;
//     scanf("%d", &N);
//     if (N > 0)
//     {
//         for (int i = 1; i <= N; i++)
//         {
//             printf("%d ", i);
//         }
//     }
//     else
//     {
//         for (int i = N; i <= 0; i++)
//         {
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }

// Problem Statement

// You will be given a positive integer N and an array A of size N. Suppose, the index starts from 0, then you need to print all the values at odd indexes in reverse way.

// For example:

// If the input is

// 6
// 10 20 30 40 50 60
// You need to print 60 40 20 as their indexes are 5 3 1 respectively.

// Input Format

// First line will contain N.
// Second line will contain the array A.
// Constraints

// 1 <= N <= 10^5
// 1 <= A[i] <= 1000 ; where A[i] are the values of array A.
// Output Format

// Output the values of odd indexes in reverse way. Don't forget to put a space between two values.
// Sample Input 0

// 5
// 10 20 30 40 50
// Sample Output 0

// 40 20 
// Sample Input 1

// 6
// 0 1 2 3 4 5
// Sample Output 1

// 5 3 1 

// #include <stdio.h>
// int main()
// {
//     int N;
//     scanf("%d", &N);
//     int A[N];
//     for (int i = 0; i < N; i++)    {
//         scanf("%d", &A[i]);
//     }
//     for (int i = N - 1; i >= 0; i--)
//     {
//         if (i % 2 != 0)
//         {
//             printf("%d ", A[i]);
//         }
//     }
//     return 0;
// }

// Problem Statement

// You will be given a positive integer N and N numbers after that. You need to tell the sum of positive numbers and the sum of negative numbers separated by a space.

// Input Format

// First line will contain N.
// Second line will contain N values named V.
// Constraints

// 1 <= N <= 10^5
// -1000 <= V <= 1000
// Output Format

// Output the sum of positive numbers first, then sum of negative numbers.
// Sample Input 0

// 6
// 5 -3 9 -10 2 8 
// Sample Output 0

// 24 -13
// Sample Input 1

// 4
// 1 0 -5 3
// Sample Output 1

// 4 -5

// #include <stdio.h>
// int main()
// {
//     int N;
//     scanf("%d", &N);
//     int V[N];
//     for (int i = 0; i < N; i++)
//     {
//         scanf("%d", &V[i]);
//     }
//     int sum_pos = 0, sum_neg = 0;
//     for (int i = 0; i < N; i++)
//     {
//         if (V[i] > 0)
//         {
//             sum_pos += V[i];
//         }
//         else if (V[i] < 0)
//         {
//             sum_neg += V[i];
//         }
//     }
//     printf("%d %d", sum_pos, sum_neg);
//     return 0;
// }

// Problem Statement

// You will given a positive integer N and an array A of size N. Also you will be given two values X and V. You need to change the value of X'th index to V and then print the array in reverse way.

// Note: Index starts from 0.

// Input Format

// First line will contain N.
// Second line will contain the array A.
// Third line will contain X and V.
// Constraints

// 1 <= N <= 10^5
// 1 <= A[i] <= 100 ; where A[i] are the values of array A.
// 0 <= X < N
// 1 <= V <= 100
// Output Format

// Output the final array in reverse order.
// Sample Input 0

// 5
// 10 20 30 40 50
// 1 100
// Sample Output 0

// 50 40 30 100 10 
// Explanation 0

// After updating the value of 1st index, the array will become 10 100 30 40 50.
// The reverse order will be 50 40 30 100 10.
// Sample Input 1

// 5
// 10 20 30 40 50
// 4 10
// Sample Output 1

// 10 40 30 20 10 

#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    int X, V;
    scanf("%d %d", &X, &V);
    A[X] = V;
    for (int i = N - 1; i >= 0; i--)
    {
        printf("%d ", A[i]);
    }
    return 0;
}

