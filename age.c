#include <stdio.h>

int main(void) {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age > 0 && age <= 2)
     printf("Still a baby\n");
    else if (age >= 3 && age <= 12)
    printf("Children\n");
    else if (age >= 13 && age <= 17)
     printf("Teenager\n");
    else if (age >= 18 && age <= 26)
    printf("Young Adult\n");
    else if (age >= 27 && age <= 39)
     printf("Middle Age\n");
    else if (age >= 40 && age <= 79)
     printf("Grand Parents\n");
    else printf("Wow\n");
}
