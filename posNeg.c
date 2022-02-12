#include <stdio.h>

int main(void) {

    int n;

    printf("Enter a number, positive or negative: ");
    scanf("%d", &n);

    if (n>=0)
    printf("%d is a positive number\n", n);
    else
    printf("%d is a negative number\n", n);
}
