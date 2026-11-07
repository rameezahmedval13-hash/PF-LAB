/*
 * ============================================================================
 * File Name    : Q1.c
 * Author       : Rameez Ahmed
 * Date Created : 11/06/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 09 - Q1
 * ============================================================================
 */
 
 #include <stdio.h>
 
 float calculateDiscount(char membship, float cartval);
 float calculateFinalBill(float disc_amount);
 
 int main(){
 	char membship;
 	float cartval;
 	float discval, discam, Total_bill;
 	
 	printf("Enter your Membership Type (P/G/S): \n");
 	scanf(" %c", &membship);
 	
 	printf("Enter your cart value (PKR):  \n");
 	scanf("%f", &cartval);
 	
 	discval = calculateDiscount(membship,cartval);
 	discam = cartval - discval; //discounted amonut
 	
 	Total_bill = calculateFinalBill(discam);
 	
 	printf("========= FINALL BILL =========\n");
 	printf("Membership Type: %c\n",membship);
 	printf("Cart Value: %.2f PKR", cartval);
 	printf("Discount Amount: %.2f PKR\n", discval);
 	printf("Discounted Value: %.2f PKR\n",discam);
 	
 	printf("Sales Tax: 15%\n");
 	if (discam <= 5000.0){
 		printf("Shipping: 300.00 PKR\n");
	 }else{
	 	printf("Shipping: Free\n");
	 }
 	printf("Total Payable: %.2f PKR\n", Total_bill);
 	
 	return 0;
 }
 
 float calculateDiscount(char membship , float cartval){
 	float rate = 0.0;
 	
 	if (membship == 'P'){
 		rate = 0.20;
	 }
	else if(membship == 'G'){
		rate = 0.10;
	}
	else if(membship == 'S'){
		rate = 0.05;
	}
	
	//additional 2% discount for >10,000 cart value
	if (cartval > 10000.0){
		rate = rate + 0.02;
	}
	
	return cartval * rate;
 }
 
 float calculateFinalBill(float disc_amount){
 	float tax = disc_amount * 0.15;
 	float ship_fee = 0.0;
 	
 	if(disc_amount <=5000.0){
 		ship_fee = 300.0;
	}
	
	return disc_amount + tax + ship_fee;
 }
