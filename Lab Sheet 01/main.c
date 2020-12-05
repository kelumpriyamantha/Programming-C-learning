#include <stdio.h>
#include <stdlib.h>

int main()
{
    float no1,no2,total,avg;
    printf("Enter the first decimal number");
    scanf("%f",&no1);
    printf("Enter the second decimal number");
    scanf("%f",&no2);

    avg=(no1+no2)/2;
    printf("Average is %f\n",avg);

    return 0;
}
