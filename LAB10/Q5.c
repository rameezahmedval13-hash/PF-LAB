/*
 * ============================================================================
 * File Name    : Q5.c
 * Author       : Rameez Ahmed
 * Date Created : 11/08/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 10 - Q5
 * ============================================================================
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 
 int main(){
 	int rollNo, marks;
 	char name[60];
 	FILE *fptr;
 	
 	fptr = fopen("marks.txt","r");
 	if (fptr == NULL){
 		printf("Error: File Not Found!\n");
 		return 1;
	 }
	 
	printf("%-10s %-20s %-10s\n", "RollNo", "Name", "Marks");
	printf("----------------------------------------\n");
	
	while (fscanf(fptr, "%d %s %d", &rollNo, name, &marks) != EOF){
		printf("%-10d %-20s %-10d\n", rollNo, name, marks);
	}
	
	fclose(fptr);
	
	return 0;
 }
