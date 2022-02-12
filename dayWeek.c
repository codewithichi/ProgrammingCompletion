#include <stdio.h>

int main(void) {
    int day_as_num;
    
    do {
        printf("What workday is it now(1-7)?: ");
        scanf("%d", &day_as_num);
    } while (day_as_num > 7 || day_as_num < 1);
    
    printf("Today is ");
    switch(day_as_num) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Please enter value either from 1-7\n");
            break;
    }
}