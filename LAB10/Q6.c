/*
 * ============================================================================
 * File Name    : Q6.c
 * Author       : Rameez Ahmed
 * Date Created : 11/08/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 10 - Q6
 * ============================================================================
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 
 int main(){
 	char inputUser[50], inputPass[50];
  	char savedUser[50], savedPass[50];	
	FILE *fptr;
	
	printf("Enter username: ");
	scanf("%s", inputUser);
	
	printf("Enter Password: ");
	scanf("%s", inputPass);
	
	fptr = fopen("credentials.txt", "r");
	
	if (fptr == NULL){
		printf("Error: Could not open credentials file. \n");
		return 1;
	}
	
	fscanf(fptr, "%s %s", savedUser, savedPass);
	
	if(strcmp(inputUser, savedUser) == 0 && strcmp(inputPass,savedPass) == 0){
		printf("Access Granted!\n");
	}else{
		printf("Access Denied!\n");
	}
	
	fclose(fptr);
	
	return 0;
 }
