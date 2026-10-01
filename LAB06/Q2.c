/*
 * ============================================================================
 * File Name    : Q2.c
 * Author       : Rameez Ahmed
 * Date Created : 10/1/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 06 - Q2
 * ============================================================================
 */
 
 #include <stdio.h>
 
 int main(){
 	int ticketnumb;
 	int rev;
 	
 	printf("Enter the ticket number: \n");
 	scanf("%d", &ticketnumb);
 	
 	printf("Reversed ticket number: \n");
 	
	do{
		rev = ticketnumb % 10;
		printf("%d", rev);
		ticketnumb = ticketnumb/10;
	}while(ticketnumb != 0);
 	
 	printf("\n");
 	
 	return 0;
 }//end of main function

