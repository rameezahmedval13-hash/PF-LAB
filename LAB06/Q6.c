/*
 * ============================================================================
 * File Name    : Q6.c
 * Author       : Rameez Ahmed
 * Date Created : 10/2/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 06 - Q6
 * ============================================================================
 */
 
 #include <stdio.h>
 
 int main(){
 	int num, evencount = 0, oddcount = 0, lastdig;
 	
 	printf("Enter a number: \n");
 	scanf("%d", &num);
 	
 	while(num != 0){
 		lastdig = num % 10;
 		if (lastdig % 2 == 0){
 			evencount = evencount + 1;
		 }
		else{
			oddcount = oddcount + 1;
		}//endif
		num = num/10;
	 }//endwhile
 	
 	printf("Number of even digits: %d\n", evencount);
 	printf("Number of odd digits: %d\n", oddcount);
 	
	 return 0;
 	
 }//main end
