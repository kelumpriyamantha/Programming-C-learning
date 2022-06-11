#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include <time.h>
void bubbleSort(int array[],int size);
int main()
{
 int i = 0;
 int items[100];
 srand(time(NULL));
 for (i = 0; i < 100; i++)
 {
 items[i] = rand();
 }
 int length = sizeof(items)/sizeof(int);
 printf("\nSorting the Array[%d] using bubble sort\n",i);
 clock_t start = clock();
 bubbleSort(items, length);
 clock_t end1 = clock();
 double time_spent1 = (double)(end1 -
start)/CLOCKS_PER_SEC;
 printf("Bubble Sort finish time: %lf milliseconds\n\n",time_spent1*1000);

 return 0;
}
void bubbleSort(int array[],int size)
{
 int j=0;
 int temp=0;
 bool swp;
 do{
 swp=false;
 for(j=0;j<(size-1);j++)
 {
 if(array[j]>array[j+1])
 {
 temp=array[j+1];
 array[j+1]=array[j];
 array[j]=temp;
 swp=true;
 }
 }
 }while(swp);
}
