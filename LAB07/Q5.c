/*
 * ============================================================================
 * File Name    : Q5.c
 * Author       : Rameez Ahmed
 * Date Created : 10/17/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 07 - Q5
 * ============================================================================
 */
 
 #include <stdio.h>
 
 int main(){
 	char sentences[3][100];
 	int r,c;
 	
 	printf("Enter 3 sentences seperated by semicolons (;): \n");
 	for(r=0;r<3;r++){
 		if(r<2){
 			scanf(" %[^;]%*c", sentences[r]);
		}else{
		 	scanf(" %[^\n]", sentences[r]);
		}//endif
 		
	 }//endfor
	 
	for(r=0;r<3;r++){
		int vowelCount = 0;
		
		for(c=0;sentences[r][c] != '\0'; c++){
			char ch = sentences[r][c];
			
			if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
			ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
				vowelCount++;
			}//endif
		}//endfor
		
		printf("\nSentence %d: %s", r+1,sentences[r]);
		printf("\nTotal Vowels: %d\n", vowelCount);
	}//endfor
	
	return 0;
 }
