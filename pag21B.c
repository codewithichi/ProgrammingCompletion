#include <stdio.h>

int main(void) {
    char word1[30];
    char word2[30];
    char word3[30];

    printf("Enter word1: ");
    scanf("%s", word1);
    printf("Enter word2: ");
    scanf("%s", word2);
    printf("Enter word3: ");
    scanf("%s", word3);

    printf("\n%s %s %s\n", word1, word2, word3);
}