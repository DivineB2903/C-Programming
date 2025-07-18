#include<stdio.h>

int main()
{
    int id1, id2, id3, q1, q2, q3, disper;
    float p1, p2, p3, total, disAmt, payAmt;
    char n1[50], n2[50], n3[50];

    printf("1st product :\nEnter Id : ");
    scanf("%d", &id1);
    printf("Enter name of the product: ");
    scanf("%s", n1);
    printf("Price of the product: ");
    scanf("%f", &p1);
    printf("Quantity of the product:");
    scanf("%d", &q1);

    printf("2nd product :\nEnter Id : ");
    scanf("%d", &id2);
    printf("Enter name of the product: ");
    scanf("%s", n2);
    printf("Price of the product: ");
    scanf("%f", &p2);
    printf("Quantity of the product:");
    scanf("%d", &q2);

    printf("3rd product :\nEnter Id : ");
    scanf("%d", &id3);
    printf("Enter name of the product: ");
    scanf("%s", n3);
    printf("Price of the product: ");
    scanf("%f", &p3);
    printf("Quantity of the product:");
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

    printf("\n---------------------------BILL SUMMARY--------------------------------------\n");
    printf("   ID   |      NAME       |     PRICE     |     QUANTITY    |      TOTAL     ");
    printf("\n%8d|%17s|%15f|%17d|%16f",id1, n1, p1, q1, (p1*q1));
    printf("\n-----------------------------------------------------------------------------");
    printf("\n%8d|%17s|%15f|%17d|%16f",id1, n1, p1, q1, (p1*q1));
    printf("\n-----------------------------------------------------------------------------");
    printf("\n%8d|%17s|%15f|%17d|%16f",id1, n1, p1, q1, (p1*q1));
    printf("\n-----------------------------------------------------------------------------");
    printf("\n\t\t\t                          Total amount : %.2f", total);
    printf("\n\t\t\t                Discount percentage (%%): %.2f", disper);
    printf("\n\t\t\t                       Discount amount : %.2f", disAmt);
    printf("\n\t\t\t                   Total amount to pay : %.2f", payAmt);
    

}

//printf("1st product: \nProduct Id : %id", id1);
//    printf("\nName of the product : %d", n1);
//    printf("\nPrice of the product : %f", p1);
//    printf("\nQuantity of the product : %d", q1);
//    printf("\n2nd product: \nProduct Id : %id", id2);
//    printf("\nName of the product : %d", n2);
//    printf("\nPrice of the product : %f", p2);
//    printf("\nQuantity of the product : %d", q2);
//    printf("\n3rd product: \nProduct Id : %id", id3);
//    printf("\nName of the product : %d", n3);
//    printf("\nPrice of the product : %f", p3);
//    printf("\nQuantity of the product : %d", q3);