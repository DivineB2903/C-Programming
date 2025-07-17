#include<stdio.h>

int main()
{
    int id1, id2, id3, q1, q2, q3, disper;
    float p1, p2, p3, total, disAmt, payAmt;
    char n1[50], n2[50], n3[50];

    printf("1st product :\n Enter Id : ");
    scanf("%d", &id1);
    printf("Enter name : ");
    scanf("%s", n1);
    printf("Price : ");
    scanf("%f", &p1);
    printf("Quantity :");
    scanf("%d", &q1);

    printf("2nd product :\n Enter Id : ");
    scanf("%d", &id2);
    printf("Enter name : ");
    scanf("%s", n2);
    printf("Price : ");
    scanf("%f", &p2);
    printf("Quantity :");
    scanf("%d", &q2);

    printf("3rd product :\n Enter Id : ");
    scanf("%d", &id3);
    printf("Enter name : ");
    scanf("%s", n3);
    printf("Price : ");
    scanf("%f", &p3);
    printf("Quantity :");
    scanf("%d", &q3);

    total = (p1*q1) + (p2*q2)  + (p3*q3);

    if (total > 100000) 
        disper = 10;
    else if (total >= 80000) 
        disper = 8;
    else if (total >= 50000)
        disper = 5;
    else if (total >= 30000)
        disper = 2;
    else disper = 0;

    disAmt = total*disper/100;

    payAmt = total - disAmt;

    printf("\n---------------------------BILL SUMMARY-----------------------------\n");
    printf("Total amount : %.2f", total);
    printf("\nDiscount percentage  : %.2f", disper);
    printf("\nDiscount amount : %.2f", disAmt);
    printf("\nTotal amount to pay : %.2f", payAmt);

    


}