/*
 * ============================================================================
 * File Name    : Q4.c
 * Author       : Rameez Ahmed
 * Date Created : 10/2/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 06 - Q4
 * ============================================================================
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 
 int main(){
 	int code, origcode, revcode, lastdig;
 	
	printf("Enter your book code: \n");
	scanf("%d", &code);
	
	origcode = code;
	
	while(code!=0){
		lastdig = code % 10;
		revcode = (revcode * 10) + lastdig;
		code = code/10;
	}//endwhile
	
	if (origcode == revcode){
		printf("The book code %d is a valid palindrome \n", origcode);
	}
	else{
		printf("The book code %d is a invalid palindrome \n", origcode);
	}//endif
	
	return 0;
 }//main end
