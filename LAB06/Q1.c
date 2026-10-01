/*
 * ============================================================================
 * File Name    : Q1.c
 * Author       : Rameez Ahmed
 * Date Created : 10/1/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 06 - Q1
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int countofpin;
    int pin;
    int sumofpin;
    int lastdig;
    int temp;

    printf("==================================\n");
    printf("     Bank Verification System     \n");
    printf("==================================\n");

    do {
        printf("Enter a 4 digit pin: \n");
        scanf("%d", &pin);

        countofpin = 0;
        sumofpin = 0;
        temp = pin;

        
        if (temp == 0) {
            countofpin = 1;
        }

        while (temp > 0) {
            lastdig = temp % 10;
            sumofpin = sumofpin + lastdig;
            temp = temp / 10;
            countofpin++;
        }//endwhile

        if (countofpin != 4) {
            printf("Error: PIN must be exactly 4 digits\n");
        }//endif

    } while (countofpin != 4);

    if (sumofpin > 10) {
        printf("Strong PIN\n");
    } else {
        printf("Weak PIN\n");
    }

    return 0;
}
