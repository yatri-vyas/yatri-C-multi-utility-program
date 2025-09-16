// convert temperature from degrees celsius to fahrenheit

#include<stdio.h>

int main()
{

    int c ;
    float f;

    printf("Enter celsius :");
    scanf("%d",&c);

    f = 1.8 * c + 32;
    printf("fahrenheit is : %.2f",f);

    return 0;
}