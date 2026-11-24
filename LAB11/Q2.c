/*
 * ============================================================================
 * File Name    : Q2.c
 * Author       : Rameez Ahmed
 * Date Created : 11/21/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 11 - Q2
 * ============================================================================
 */
 
#include <stdio.h>

struct Product {
    int id;
    char name[50];
    char category[30];
    float price;
    int stockQuantity;
};

void displayProductDetails(struct Product p) {
    float discountedPrice = p.price - (p.price * 0.05f);
    
    printf("--- Product Details ---\n");
    printf("ID: %d\n", p.id);
    printf("Name: %s\n", p.name);
    printf("Category: %s\n", p.category);
    printf("Original Price: %.2f\n", p.price);
    printf("Final Price (5%% Discount): %.2f\n", discountedPrice);
    printf("Available Stock: %d\n", p.stockQuantity);
}

int main() {
    struct Product item1 = {101, "Mechanical Keyboard", "Electronics", 8500.00, 15};
    
    displayProductDetails(item1);
    
    return 0;
}
