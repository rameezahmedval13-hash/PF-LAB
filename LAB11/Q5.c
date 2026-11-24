/*
 * ============================================================================
 * File Name    : Q5.c
 * Author       : Rameez Ahmed
 * Date Created : 11/24/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 11 - Q5
 * ============================================================================
 */
 
#include <stdio.h>

struct hospitalRecord{
    int recordId;
    char ward[30];
    
    struct patientInfo {
        char name[50];
        int age;
        char bloodGroup[5];
    } patient;
};

int main() {
    struct hospitalRecord admission = {
        5092, 
        "Emergency ICU", 
        {"Ali Raza", 34, "O+"}
    };

    struct hospitalRecord *ptr = &admission;

    printf("--- Hospital Admission Record ---\n");
    printf("Record ID: %d\n", ptr->recordId);
    printf("Ward: %s\n", ptr->ward);
    printf("Patient Name: %s\n", ptr->patient.name);
    printf("Age: %d\n", ptr->patient.age);
    printf("Blood Group: %s\n", ptr->patient.bloodGroup);

    return 0;
}
