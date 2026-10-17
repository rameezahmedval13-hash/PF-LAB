/*
 * ============================================================================
 * File Name    : Q4.c
 * Author       : Rameez Ahmed
 * Date Created : 10/17/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 07 - Q4
 * ============================================================================
 */
 
 #include <stdio.h>
 
 int main(){
 	char word_grid[3][100];
 	int r,c;
 	
 	for(r=0;r<3;r++){
 		printf("Enter line %d (3 space seperated words): \n", r + 1);
 		scanf(" %[^\n]", word_grid[r]);
	 }//endfor
	 
	int max_len = 0;
	int wanted_i = 0;
	int wanted_j = 0;
	 
	for(r=0;r<3;r++){
		c = 0;
		int word_index = 0;
		
		while(word_grid[r][c] != '\0'){
			while(word_grid[r][c] == ' '){
				c++;
			}//endif
			
			if(word_grid[r][c] == '\0'){
				break;
			}//endif
			
			int current_len = 0;
			while(word_grid[r][c] != ' ' && word_grid[r][c] != '\0'){
				current_len++;
				c++;
			}//endwhile
			
			if(current_len > max_len){
				max_len = current_len;
				wanted_i = r;
				wanted_j = word_index;
			}//endif
			
			word_index++;
		}//endwhile
	 }//endfor
	 
	 printf("\nMaximum Word Length Found: %d\n", max_len);
	 printf("Row Index (i): %d\n", wanted_i);
	 printf("Colum Index (j): %d\n", wanted_j);
	 
	 return 0;
 }//end main
