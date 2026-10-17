/*
 * ============================================================================
 * File Name    : Q2.c
 * Author       : Rameez Ahmed
 * Date Created : 10/17/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 07 - Q2
 * ============================================================================
 */
 
 #include <stdio.h>
 
 int main(){
 	char logs[3][30];
 	int i,r,c;
 	int count = 0;
 	
 	for(i=0;i<3;i++){
 		printf("Enter a raw CSV log: \n");
 		scanf(" %[^,],%[^,],%[^\n]", logs[0],logs[1],logs[2]);
 		for(r=0;r<3;r++){
 			for(c=0;c<30;c++){
 				if(logs[r][c] >= 'A' && logs[r][c] <= 'Z'){
 					count = count + 1;
				 }
			 }
		 }
	 }
	 
	 printf("Final count of uppercase letters: %d", count);
 }//end main
