#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{



int linearSearch (int items[], int target, int length);
int binarySearch (int items[], int target, int length);

  int target = 7;
  int items[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int length = sizeof (items) / sizeof (int);


  printf ("Array: [ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ]\n\n");

  printf ("Find %d in an array size of %d\n\n", target, length);

// Start measuring time
clock_t start = clock();

  //linearSearch
   int location1 = linearSearch (items, target, length);

  if (location1 == -1)
    {
        printf ("Not Found\n");
    }
  else
    {
      printf ("Found the linearSearc target at %d\n", location1);
    }


clock_t read1 = clock();
double time_spent1 = (double)(read1 - start)/CLOCKS_PER_SEC;
printf("linearSearch finish time:  %lf milliseconds\n\n",time_spent1*1000);

  //binarySearch
  int location = binarySearch (items, target, length);

  if (location == -1)
    {
        printf ("Not Found\n");
    }
  else
    {
      printf ("Found the binarySearch target at %d\n", location);
    }

clock_t read2 = clock();
double time_spent2 = (double)(read2 - read1)/CLOCKS_PER_SEC;
printf("binarySearch finish time:  %lf milliseconds\n\n",time_spent2*1000);



  return 0;
}


int binarySearch (int items[], int target, int length)
{
    int beginingOfRange = 0;
    int endOfRange = length; // end of the range
    while (beginingOfRange <= endOfRange)
    {
        int midPoint = (beginingOfRange + endOfRange) / 2;
        if (target < items[midPoint])
            {
                endOfRange = midPoint - 1;
            }
            else if (target > items[midPoint])
            {
                beginingOfRange = midPoint + 1;
            }
            else
            {
                return midPoint;
            }
    }
    return -1;

}



int linearSearch (int items[], int target, int length)
{
  int i = 0;
  for (i = 0; i < length; i++)
    {
      //printf ("%d\t%d\n", i, items[i]);
      if (items[i] == target)
  {
    return i;
  }
    }
  return -1;
}
