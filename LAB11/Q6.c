/*
 * ============================================================================
 * File Name    : Q6.c
 * Author       : Rameez Ahmed
 * Date Created : 11/24/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 11 - Q6
 * ============================================================================
 */
 
#include <stdio.h>

#define TOLL_RATE 50 

void processVehicle(char vehicleType[]) {
    static int totalVehicles = 0;
    static int totalRevenue = 0;

    totalVehicles++;
    totalRevenue += TOLL_RATE;

    printf("Processed: %-10s | Fee: %d PKR | Running Total Vehicles: %d | Running Revenue: %d PKR\n", 
           vehicleType, TOLL_RATE, totalVehicles, totalRevenue);
}

int main() {
    printf("--- Toll Plaza Daily Log ---\n");
    
    processVehicle("Car");
    processVehicle("Truck");
    processVehicle("Bus");
    processVehicle("Motorcycle");
    processVehicle("Van");

    return 0;
}
