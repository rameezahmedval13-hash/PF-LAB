/*
 * ============================================================================
 * File Name    : Q4.c
 * Author       : Rameez Ahmed
 * Date Created : 11/23/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 11 - Q4
 * ============================================================================
 */
 
 #include <stdio.h>

struct address{
    char city[30];
    int zipCode;
    char state[30];
};

struct Student {
    char rollNo[15];
    char name[50];
    float cgpa;
    struct address stdAddress; 
};

int main() {
    struct Student std1 = {
        "26K-2527", 
        "Rameez Ahmed", 
        3.85, 
        {"Karachi", 75100, "Sindh"}
    };

    printf("--- Student Profile ---\n");
    printf("Roll No: %s\n", student1.rollNo);
    printf("Name: %s\n", student1.name);
    printf("CGPA: %.2f\n", student1.cgpa);
    printf("City: %s\n", student1.studentAddress.city);
    printf("Zip Code: %d\n", student1.studentAddress.zipCode);
    printf("State: %s\n", student1.studentAddress.state);

    return 0;
}
