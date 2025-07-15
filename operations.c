#include<stdio.h>

int main()
{
    int a, b; 

    printf("Enter 2 numbers : ");
    scanf("%d %d", &a, &b);

    printf("The sum is : %d",(a+b));

    if(a>b)
    {
        printf("\nThe difference is : %d",a-b);
    }
    else
    {
        printf("\nThe difference is : %d",b-a);
    }

    printf("\nThe product is : %d",a*b);
    
    if(a>b)
    {
        printf("\nThe result is : %d",a/b);
    }
    else
    {
        printf("\nThe result is : %d",b/a);
    }

    return 0;
}