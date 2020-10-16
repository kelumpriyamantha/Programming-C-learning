#include <stdio.h>
int main()
{
    int counter=1,oddc=o,evenc=o,no;
    while(counter<=10)
    {
        //input no
        printf("Enter %d Number ", counter);
        scanf("%d",&no);


        if(no%2==0)
        evenc=evenc+1;

        else
        oddc=oddc+1;
      counter++;

    }
      printf("Total count of odd number %d \n",oddc);
      printf("Total count of even number %d \n",evenc);

}
