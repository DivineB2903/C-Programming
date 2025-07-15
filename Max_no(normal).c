#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter any 2 number : ");
    scanf("%d%d", &a, &b);

    if(a < b)
    {
        printf("max is %d ", a);
    }
    else{
        printf("Max is %d ", b);
    }

    return 0;
}