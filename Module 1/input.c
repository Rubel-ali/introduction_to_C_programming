#include <stdio.h>
int main()
{
    int a;
    float f;
    char c;
    scanf("%d %f %c", &a, &f, &c);
    printf("%d %.3f %c", a, f, c);
    return 0;
}