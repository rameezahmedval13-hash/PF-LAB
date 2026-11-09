/*
 * ============================================================================
 * File Name    : Q3.c
 * Author       : Rameez Ahmed
 * Date Created : 11/08/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 10 - Q3
 * ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main(){
	char email[50];
	char domain[50];
	char *ptr;
	
	printf("Enter your email address: \n");
	scanf("%s", email);
	
	if (strchr(email,'@') == NULL){
		printf("ERROR: Invalid Email Format\n");
	}else{
		ptr = strchr(email,'@');
		
		strcpy(domain,ptr+1);
		printf("Domain: %s\n", domain);
	}
	
	return 0;
}
