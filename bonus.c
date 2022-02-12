#include <stdio.h>

// Prototype of function get bonus
float get_bonus(int, int);


int main(void) {
    int salary;
    int year_in_service;
    float bonus;

    // Get user input for salary and year_in_service in the company
    printf("How much is your salary?: ");
    scanf("%i", &salary);
    printf("How many years have you been working in the company?: ");
    scanf("%i", &year_in_service);


    bonus = get_bonus(salary, year_in_service);
    printf("Your total bonus is: %.2f\n", bonus);
}

// function to calculate bonus base on the number of years in service
float get_bonus(int salary, int year_in_service) {
    float bonus;
    float bonus_percentage;

    // Get the bonus percentage base on the number of year_in_service
    if(year_in_service == 1) { bonus_percentage = 0.125; }
    else if(year_in_service > 1 && year_in_service <= 3) { bonus_percentage = 0.18; }
    else if(year_in_service > 3 && year_in_service <= 10) { bonus_percentage = 0.5; }
    else if(year_in_service > 10) { bonus_percentage = 1; }
    else { bonus_percentage = 0; }

    bonus = salary * bonus_percentage;

    return bonus;
}