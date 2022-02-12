/* Program to print multiples of 2 */ 
#include <stdio.h>

int main(void)
{ 
  int count = 2; 

  printf("Multiples of 2\n"); 

  while (count <= 50)
  { 
    printf("%d\n", count); 
    count += 2; 
  } 
} 
