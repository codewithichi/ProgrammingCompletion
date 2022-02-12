#include <stdio.h>

// Prototype function
int calculate_parking_charge(char, int);


int main(void) {
    char vehicle_type;
    int parking_time;
    int parking_charge;

    // Get user inputs
    printf("[c] - Car\n");
    printf("[b] - Bus\n");
    printf("[t] - Truck\n");
    do {
        // Get vehicle_type of the user
        printf("What is your vehicle type?: ");
        scanf("%s", &vehicle_type);
        // printf("\n");
    } while(vehicle_type != 'c' && vehicle_type != 'b' && vehicle_type != 't');

    // Get time of parking of the user
    printf("How long have you parked?: ");
    scanf("%d", &parking_time);

    // Calculate the parking charge
    parking_charge = calculate_parking_charge(vehicle_type, parking_time);

    printf("Please pay up 'Php %i' for your parking charge. \n", parking_charge);
}


// function to calculat parking charge of the user based on vehicle type
int calculate_parking_charge(char vehicle_type, int parking_time) {
    int charge_per_hour;
    int total_parking_cost;

    // Determine charge_per_hour based on the vehicle_type
    if(vehicle_type == 'c') { charge_per_hour = 20; }
    if(vehicle_type == 'b') { charge_per_hour = 40; }
    if(vehicle_type == 't') { charge_per_hour = 50; }

    total_parking_cost = parking_time * charge_per_hour;

    return total_parking_cost;
}