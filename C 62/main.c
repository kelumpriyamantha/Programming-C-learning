#include <stdio.h>
#include <stdlib.h>

int findsum(int a,int b)
{
    int total=a+b;
 return total;
}

int main()
{
    int x,y;
    printf("Enter The integers");
    scanf("%d %d,&x,&y");
    printf("The sum is %d \n",findsum(56,78));
}
