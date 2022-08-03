/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float sub1,sub2;
  float avg = 0;

  printf("Please Enter Mark of Subject 01:");
  scanf("%f",&sub1);
  printf("Please Enter Mark of Subject 02:");
  scanf("%f",&sub2);

  avg = (sub1 + sub2)/2;

  printf("Your Average is :%.2f",avg);
  
  return 0;
}


