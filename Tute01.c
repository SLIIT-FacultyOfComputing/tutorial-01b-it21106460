/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) {
  int marks1, marks2,sum,average;
  
  printf("Enter marks 1: ");
  scanf("%d", &marks1);

  printf("Enter marks 2: ");
  scanf("%d" , &marks2);

  sum=marks1+marks2;
  average=sum/2;

  printf("Average  is:%2d ",average);

  



  return 0;
}

