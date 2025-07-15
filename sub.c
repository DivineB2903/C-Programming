#include<stdio.h>
int main() 
{

    int a, b;
    printf("Enter any 2 numbers : ");
    scanf("%d \n %d", &a, &b);
    if(a>b)
    {
        printf(" The difference is : ", &a-b);
    }
    else
    {
        printf(" The difference is : ", &b-a);
    }
    
    
}