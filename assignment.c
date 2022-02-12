#include <stdio.h>

int main(void) {
    float grade;


    float total_grade = 0;

    int i;
    int total_loop = 3;
    for (i = 1; i <= total_loop; ++i) {
         printf("Grade %i: ", i);
         scanf("%f", &grade);

         total_grade += grade;
    }

    float average = total_grade / total_loop;

    if (average >= 60) {
        printf("Average Grade: %.2f :-)\n", average);
    } else {
        printf("Average Grade: %.2f :-(\n", average);
    }

}
