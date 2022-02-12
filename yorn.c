#include<stdio.h>

int main(void)
{
    char yorn;

    do
    {
        printf("\nDo you want to go through the loop? (y or n): ");
        scanf("%s", &yorn);
        printf("%c", yorn);
    } while (yorn == 'y');
}
