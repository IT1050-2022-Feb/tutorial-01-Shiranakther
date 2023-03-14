/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   
   float mark1,mark2, avarage,sum;
   printf("enter first subject mark");
   scanf("%f",&mark1);
   printf("enter second subject mark");
   scanf("%f",&mark2);
   sum=mark1+mark2;
   average=sum/2;
   printf("sum of marks are:%.2f",sum);
   printf("average of marks are:%.2f",average);
  
  return 0;
}

