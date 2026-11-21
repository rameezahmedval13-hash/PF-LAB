/*
 * ============================================================================
 * File Name    : Q1.c
 * Author       : Rameez Ahmed
 * Date Created : 11/21/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 11 - Q1
 * ============================================================================
 */
 
#include <stdio.h>

//Function Declaration
int calculateChecksum(int transactionID);

int main (){
	int id;
	printf("Enter your transaction ID: \n");
	scanf("%d", &id);
	
	printf("Checksum value: %d\n", calculateChecksum(id));
	
	return 0;
}

//Function Definition
int calculateChecksum(int transactionID){
	if (transactionID < 0){
		transactionID = -transactionID;
	}
	if (transactionID < 10){
		return transactionID;
	}
	
	int digSum = (transactionID % 10) + calculateChecksum(transactionID/10);
	
	if (digSum >= 10){
		return calculateChecksum(digSum);
	}
	return digSum;
}
