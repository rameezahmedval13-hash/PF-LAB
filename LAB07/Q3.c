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
 	char secret_messages[3][100];
 	int r,c;
 	
 	for(r=0;r<3;r++){
 		printf("Enter a message: \n");
 		scanf(" %[A-Z ]", secret_messages[r]);
 		
 		while(getchar() != '\n');
	 }//endfor
	 
	for(r=0;r<3;r++){
		int spaceCount = 0;
		for(c=0;c<100;c++){
			
			if(secret_messages[r][c] == '\0'){
				break;
			}
			if(secret_messages[r][c] == ' '){
				spaceCount++;
			}
		}
		
		int wordCount = 0;
		if(secret_messages[r][0] != '\0'){
			wordCount = spaceCount + 1;
		}
		
		printf("Filtered Messages: %s | Word Count: %d\n", secret_messages[r], wordCount);

	}
	
	return 0;
	
 }//end main
