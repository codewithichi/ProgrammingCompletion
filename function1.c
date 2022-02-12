#include <stdio.h>
#define TOTAL_NUMBER 10

int main(void)
{
    int score;
    int sum_of_all_score = 0;

    // LOOP 10 times to get 10 scores from user
    for (int i = 1; i <= TOTAL_NUMBER; i++) {
        printf("%i - What is your score?[1-20]: ", i);
        scanf("%d", &score);

        // Increment sum for every user input for score
        sum_of_all_score += score;
    }

    // Get the average and print
    float average_score = sum_of_all_score / TOTAL_NUMBER;

    printf("Your average is: %.2f\n", average_score);
}
