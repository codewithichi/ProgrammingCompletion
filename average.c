#include <stdio.h>

int main(void) {
    char name[20];
    int num1;
    int num2;
    int num3;

    printf("Enter your name: ");
    scanf("%[^\n]s", name);



    printf("Give me 3 numbers.\n");

    printf("First number: ");
    scanf("%d", &num1);

    printf("Second number: ");
    scanf("%d", &num2);

    printf("Third number: ");
    scanf("%d", &num3);

    printf("\n---------------------------\n");
    printf("Results:\n");

    int sum = num1 + num2 + num3;
    int average = sum / 3;


    printf("Name: %s\n", name);
    printf("Sum: %i\n", sum);
    printf("Average %i\n", average);
}