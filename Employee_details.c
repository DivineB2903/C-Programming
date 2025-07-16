#include <stdio.h>

int main() {
    int id;
    char name[50];
    float bs, da, hra, tax = 0, total_salary;

    FILE *fp;
    fp = fopen("Total_Salary.txt", "w");

    printf("Enter Employee ID: ");
    scanf("%d", &id);
    printf("Enter Employee Name: ");
    scanf("%s", &name);
    printf("Enter Basic Salary: ");
    scanf("%f", &bs);
    printf("Enter DA: ");
    scanf("%f", &da);

    printf("Enter HRA: ");
    scanf("%f", &hra);

    if (bs >= 100000)
        tax = 0.20 * bs;
    else if (bs >= 80000)
        tax = 0.15 * bs;
    else if (bs >= 50000)
        tax = 0.10 * bs;
    else if (bs >= 30000)
        tax = 0.05 * bs;
    else
        tax = 0;

    total_salary = bs + da + hra - tax;


    fprintf(fp,"\n-------------------Employee Details -------------------------");
    fprintf(fp,"\nID: %d", id);
    fprintf(fp,"\nName: %s", name);
    fprintf(fp,"\nBasic Salary: %f", bs);
    fprintf(fp,"\nDA: %f", da);
    fprintf(fp,"\nHRA: %f", hra);
    fprintf(fp,"\nTax: %f", tax);
    fprintf(fp,"\nTotal Salary: %f", total_salary);

    return 0;
}
