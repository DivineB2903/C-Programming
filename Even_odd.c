#include<stdio.h>

int main()
{
    int n;
    Printf("Enter any number : ");
    scanf("%d", &n);

    if(n & 1)
    {
        printf("Entered numer is odd");
    }

    else
    {
        printf("Enterd number is even");
    }

    return 0;
}