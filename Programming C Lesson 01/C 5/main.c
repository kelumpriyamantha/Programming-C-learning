#include <stdio.h>
#include <stdlib.h>

int main()
{
    int name,salary,increment,new_salary;
    printf("enter the employee name\n");
    scanf("%d",&name);

    printf("enter the basic salary employee\n");
    scanf("%d",&salary);

    if((salary<5000))
     increment=(salary*5)/100;
    if((salary>=5000)&&(salary<10000))
      increment=(salary*10)/100;
    if((salary>=10000))
       increment=(salary*15)/100;

    new_salary=salary+increment;
    printf("\n new salary of this employee %d",new_salary);
}
