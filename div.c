#include<stdio.h>
int main() 
{
    int a, b; 

    printf("Enter 2 numbers : ");
    scanf("%d %d", &a, &b);

    if(a>b)
    {
        printf(" The result is : %d",a/b);
    }
    else
    {
        printf(" The difference  is : %d",b/a);
    }

    return 0;
}