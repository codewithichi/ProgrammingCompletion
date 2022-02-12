#include<stdio.h>
#include<math.h>

void addition(int x, int y) {
    int a;
    a = x + y;
    printf("\nthe sum of the two numbers is %d \n", a);
}

void subtraction(int x, int y) {
    int a;
    a = x - y;
    printf("the difference of the two numbers is %d \n", a);
}

void multiplication(int x, int y) {
    int a;
    a = x * y;
    printf("the product of the two numbers is %d \n", a);
}

void division(int x, int y) {
    float a;
    a = x / y;
    printf("the quotient of the two numbers is %.2lf \n", a);
}

int main () {
    int a, b;

    printf("input first number:");
    scanf("%d", &a);

    printf("input second number:");
    scanf("%d", &b);

    addition(a, b);
    subtraction(a, b);
    multiplication(a, b);
    division(a, b);
}
