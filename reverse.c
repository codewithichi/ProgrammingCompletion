/* Program to reverse the digits of a number */
#include <stdio.h>

int main (void)
{
  int number ;
  int reversed_digit;

  printf("Enter a number \n");
  scanf("%d", &number);

  while (number != 0)
   {
    reversed_digit = number % 10 ;
    printf("%d", reversed_digit) ;
    number = number / 10 ;
  }
  printf("\n");
}
