/*
 * ============================================================================
 * File Name    : Q2.c
 * Author       : Rameez Ahmed
 * Date Created : 11/06/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 09 - Q2
 * ============================================================================
 */
 
 #include <stdio.h>
 
 void withdraw(float* accbalance, float wd_amount);
 
 void deposit(float* accbalance, float deposit_amount);
 
 int main(){
 	float balance = 5000.0;
 	char trans_type;
 	float amount;
 	
 	printf("Enter a Transaction Type (D: Debit, C: Credit): \n");
 	scanf(" %c", &trans_type);
 	
 	printf("Enter amount: \n");
 	scanf("%f", &amount);
 	
 	printf("\n=== Transaction Details ===\n");
 	if (trans_type == 'D' || trans_type == 'd'){
 		withdraw(&balance, amount);
	 }else if(trans_type == 'C' || trans_type == 'c'){
	 	deposit(&balance, amount);
	 }else{
	 	printf("Error: Invalid transaction type selected.\n");
	 }
 	
 	printf("\nFinal Account Balance: %.2f\n", balance);
 	
 	return 0;
 }
 
 void withdraw(float* accbalance, float wd_amount){
 	
 	if (wd_amount <= *accbalance){
 		*accbalance = *accbalance - wd_amount;
 		printf("Transaction Successful: %.2f were deducted from your account\n", wd_amount);
	 }
	 else{
	 	printf("Transaction Declined: Insufficient Balance\n");
	 }
 }//end withdraw
 
 void deposit(float* accbalance, float deposit_amount){
 	*accbalance = *accbalance + deposit_amount;
 	printf("Amount Desposited Successfully\n");
 	printf("Updated Balance: %.2f\n", *accbalance);
 }
