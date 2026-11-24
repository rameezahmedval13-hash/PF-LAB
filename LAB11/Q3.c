/*
 * ============================================================================
 * File Name    : Q3.c
 * Author       : Rameez Ahmed
 * Date Created : 11/23/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 11 - Q3
 * ============================================================================
 */
 
 #include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float unitPrice;
};

int main() {
    struct Item warehouse[5];
    float totalInventoryValue = 0.0f;
    int searchId, found = 0;

    //input details for 5 items
    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for Item %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &warehouse[i].id);
        
        printf("Name: ");
        scanf(" %49[^\n]", warehouse[i].name); 
        
        printf("Quantity: ");
        scanf("%d", &warehouse[i].quantity);
        
        printf("Unit Price: ");
        scanf("%f", &warehouse[i].unitPrice);

        totalInventoryValue += (warehouse[i].quantity * warehouse[i].unitPrice);
    }

    printf("\nTotal Warehouse Inventory Value: %.2f\n", totalInventoryValue);

    //searching for specific item by id
    printf("\nEnter Item ID to search: ");
    scanf("%d", &searchId);

    for (int i = 0; i < 5; i++) {
        if (warehouse[i].id == searchId) {
            printf("\n--- Item Found ---\n");
            printf("ID: %d\n", warehouse[i].id);
            printf("Name: %s\n", warehouse[i].name);
            printf("Quantity: %d\n", warehouse[i].quantity);
            printf("Unit Price: %.2f\n", warehouse[i].unitPrice);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Item with ID %d not found in the warehouse.\n", searchId);
    }

    return 0;
}
