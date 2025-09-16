// calculate gross salary 

#include<stdio.h>

int main()
{

    int salary,hra,da,ta;
    float grosssalary;

    printf("Enter Basic Salary :");
    scanf("%d" , &salary);

    printf("Enter HRA :");
    scanf("%d" , &hra);

    printf("Enter DA :");
    scanf("%d" , &da);

    printf("Enter TA :");
    scanf("%d" , &ta);

    grosssalary = salary + hra + da + ta ;
    printf("Gross Salary is : %.2f", grosssalary);

    return 0;
}