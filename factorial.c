#include<stdio.h>

int get_factorial(int);

int main(void)
{
    int given_number;

    printf("Enter an integer: ");
    scanf("%d", &given_number);

    int factorial = get_factorial(given_number);
    
    printf("Factorial: %i\n", factorial);
}


int get_factorial(int number) {
    if (number <= 1) return 1;

    return number * get_factorial(number - 1);
}