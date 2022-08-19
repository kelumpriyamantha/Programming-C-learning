#include<stdio.h>
void printFibonacci(int n){
    static int no1=0,no2=1,no3;
    if(n>0){
         no3 = no1 + no2;
         no1 = no2;
         no2 = no3;
         printf("%d ",no3);
         printFibonacci(n-1);
    }
}
int main(){
    int n=6;
    printf("Fibonacci Series: ");
    printf("%d %d ",0,1);
    printFibonacci(n-2);
  return 0;
 }
