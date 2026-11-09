/*
 * ============================================================================
 * File Name    : Q4.c
 * Author       : Rameez Ahmed
 * Date Created : 11/08/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 10 - Q4
 * ============================================================================
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 
 int main(){
 	char customerName[50];
 	int accNo;
 	float withdAmount;
 	FILE *fptr;
 	
 	printf("Enter Customer Name: ");
 	scanf("%s", customerName);
 	
 	printf("Enter Account Number: ");
 	scanf("%d", &accNo);
 	
 	printf("Enter Withdrawal Amount: ");
 	scanf("%f", &withdAmount);
 	
 	fptr = fopen("bank_log.txt", "a");
 	
 	if (fptr == NULL){
 		printf("System Error: Unable to access log file. \n");
 		return 1;
	 }
	 
	 fprintf(fptr, "Name: %s | Acc: %d | Amount: %.2f\n", customerName, accNo, withdAmount);
	 fclose(fptr);
	 
	 printf("Transaction Succesfully Logged.\n");
	 
	 return 0;

 }
