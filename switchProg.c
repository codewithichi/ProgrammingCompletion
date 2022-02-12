#include <stdio.h>

int main(void) {
    char choice;

    printf("What flavor do you like?");
    printf("\n\ta) Apple");
    printf("\n\tb) Orange");
    printf("\n\tc) Vanilla");
    printf("\n\td) Mint\n: ");
    scanf("%c", &choice);

    switch (choice) {
        case 'a':
                printf("I like apple too.\n");
                break;
        case 'b':
                printf("I like orange too.\n");
                break;
        case 'c':
                printf("I like vanilla too.\n");
                break;
        case 'd':
                printf("I like mint too.\n");
                break;
        default: printf("Huh?\n");
    }
}
