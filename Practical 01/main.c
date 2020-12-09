#include<stdio.h>
#include<stdio.h>

int main()
{
    int C,F;
    printf("Input temperature value in Celsius");
    scanf("%d",&C);
    printf("Input temperature value in Fahreheit");
    scanf("%d",&F);

    C = (5/9)*(F-32);
    printf("%d %d",C,F);
    return 0;
}


