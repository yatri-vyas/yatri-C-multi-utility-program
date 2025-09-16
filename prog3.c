// triangle angle finder 

#include<stdio.h>

int main()
{

    int firstangle,secondangle,thirdangle;

    printf("Enter value for First Angle :");
    scanf("%d", &firstangle);

    printf("Enter value for Second Angle :");
    scanf("%d", &secondangle);

   thirdangle = 180 - (firstangle + secondangle);
   printf("Third angle's value is : %d", thirdangle);

    return 0;
}
