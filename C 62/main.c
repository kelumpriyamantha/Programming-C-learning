#include <stdio.h>
#include <stdlib.h>

float findAvg()
{
    int a,b;
    float avg;
    printf("Enter Two integers");
    scanf("%d %d",&a,&b);
    avg=(float)(a+b)/2;
 return avg;
}

int main()
{
    printf("The Average is %.2f \n",findAvg());
}
