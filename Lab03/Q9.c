#include <stdio.h>

int main(){
	char prodname[50];
	int quantity;
	float price;
	printf("Enter product name: ");
	scanf("%49s", prodname);
	printf("Enter quantity: ");
	scanf("%d", &quantity);
	printf("Enter price: ");
	scanf("%f", &price);
	
	printf("Product Name: %s\n", prodname);
	printf("Quantity: %u\n", quantity);
	printf("Price: %.2f\n", price);
}
