#include<stdio.h>

int main()
{
    char Name[50];
    int roll_no ;
    char grade;

    FILE *fp;
    fp = fopen("Result.txt", "w");
    


    printf("Enter Your roll no. : ");
    scanf("%d", &roll_no);
    printf("Enter Your name : ");
    scanf("%s", &Name);

    char sub1[50], sub2[50], sub3[50];
    int m1, m2, m3;

    printf("Enter subject name  : ");
    scanf("%s", &sub1);
    printf("\nMarks of subject 1 : ");
    scanf("%d", &m1);
    printf("\nEnter subject name  : ");
    scanf("%s", &sub2);
    printf("\nMarks of subject 2 : ");
    scanf("%d", &m2);
    printf("\nEnter subject name  : ");
    scanf("%s", &sub3);
    printf("\nMarks of subject 3 : ");
    scanf("%d", &m3);

    float total = m1 + m2 + m3;
    float avg = total / 3;
    
    if(avg <= 100 && avg >= 90)
    grade = 'A';
    else if( 89 >= avg && avg >= 75)
    grade = 'B';
    else if(75 >= avg && avg >= 65 )
    grade = 'C';
    else if(65 >= avg && avg >= 50)
    grade = 'D';
    else if(50 >= avg && avg >= 45)
    grade = 'E';
    else
    grade = 'F';

    fprintf(fp,"\n--------------------Student details-------------------------");
    fprintf(fp,"\nName : %s ", Name);
    fprintf(fp,"\nRoll no. : %d ", roll_no);
    fprintf(fp,"\nSubject Name : %s ", sub1);
    fprintf(fp,"\nMarks : %d", m1);
    fprintf(fp,"\nSubject Name : %s ", sub2);
    fprintf(fp,"\nMarks : %d", m2);
    fprintf(fp,"\nSubject Name : %s ", sub3);
    fprintf(fp,"\nMarks : %d", m3);
    fprintf(fp,"\nTotal marks : %f", total);
    fprintf(fp,"\npercentage is : %f", avg);
    fprintf(fp,"\nYour grade is : %c", grade);

    
    
    return 0;
}