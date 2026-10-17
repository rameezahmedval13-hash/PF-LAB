/*
 * ============================================================================
 * File Name    : Q1.c
 * Author       : Rameez Ahmed
 * Date Created : 10/17/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 07 - Q1
 * ============================================================================
 */
 
 #include <stdio.h>
 
 int main(){
 	char student_names[3][50];
 	int marks[3][3];
 	int row,col;
 	float averages[3];
 	
 	//input loop for std name and marks
 	for(row = 0; row <3; row++){
 		printf("Enter full name for students %d: ", row + 1);
 		scanf(" %[^\n]", student_names[row]);
 		
 		printf("Enter marks for 3 subjects %s: \n", student_names[row]);
 		int sum = 0;
 		for(col = 0 ; col<3 ; col++){
 			printf(" Subject %d marks: ", col + 1);
 			scanf("%d", &marks[row][col]);
 			sum += marks[row][col];
		 }//endfor
		 
		averages[row] = (float)sum / 3.0;
	 	printf("\n");
	 }//endfor
	 
	printf("\n=========================================================\n");
 	printf("                 Student Report Card           \n");
 	printf("=========================================================\n");
 	printf("%-25s | %-22s | %-10s\n", "Full Name", "Marks (S1,S2,S3)", "Average");
 
 	for(row = 0; row <3 ; row++){
 		printf("%-25s | %-6d, %-6d, %-6d | %.2f\n", student_names[row], 
	 	marks[row][0], marks[row][1], marks[row][2], averages[row]);
	}
 	printf("=========================================================");
 
 	return 0;
	 
	 
 }//end main
 


