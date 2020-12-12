#include <stdio.h>
double findProduct(int a,float b)
{
    double product;
    product=(double)a*(double)b;
return product;
}
int main()
{
    int x;
    float y;
    printf("Enter the two numbers");
    scanf("%d %f",&x,&y);
    printf("\nProduct is %1f\n",findProduct(x,y));
}


