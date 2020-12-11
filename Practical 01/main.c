#include <stdio.h>
#include <stdlib.h>
int main()
{

   int n,i, scaler_sum1=0, scaler_product_sum=0, scaler_sum2=0;

   printf("enter the size for array");
   scanf("%d",&n);

   int arr1[n],arr2[n],vector_sum[n],vector_product[n],scaler_product[n];

   for(i=0;i<n;i++)
   {
       printf("enter a value for array 1 :");
       scanf("%d",&arr1[i]);
   }
   for(i=0;i<n;i++)
   {
       printf("enter a value for array 2 :");
       scanf("%d",&arr2[i]);
   }
   for(i=0;i<n;i++)
   {
       scaler_sum1=scaler_sum1*arr1[i];
       scaler_sum2=scaler_sum2*arr2[i];
   }
   printf("\nArray 1 scaler sum: %d\n",scaler_sum1);
   printf("\nArray 2 scaler sum: %d\n",scaler_sum2);
   printf("\nvector_sum: ");
   for(i=0;i<n;i++)
   {
       vector_sum[i]=arr1[i]+arr2[i];
       printf("%d",vector_sum[i]);
   }
   printf("\n\nvector_product:");
   for(i=0;1<n;i++);
   {
       vector_product[i]=arr1[i]*arr2[i];
       printf("%d",vector_product[i]);
   }
   printf("\n");
   for(i=0;i<n;i++)
   {
       scaler_product[i]=arr1[i]*arr2[i];
       scaler_product_sum=scaler_product_sum+scaler_product[i];
   }
   printf("scaler_product: %d\n",scaler_product_sum);
}
