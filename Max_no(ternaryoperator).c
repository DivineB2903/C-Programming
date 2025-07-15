#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter any 2 number : ");
    scanf("%d%d", &a, &b);

    printf("Max is %d", (a > b)?a:b);

    return 0;
}