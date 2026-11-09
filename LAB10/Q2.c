/*
 * ============================================================================
 * File Name    : Q2.c
 * Author       : Rameez Ahmed
 * Date Created : 11/08/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 10 - Q2
 * ============================================================================
 */
 
 #include <stdio.h>
 #include <string.h>
 
 int main(){
 	char names[10][50];
 	char temp[50];
	int i,j;
	//inserting names
	for(i = 0; i<10; i++){
		printf("Enter name %d: ", i+1);
		scanf("%s", names[i]);
	}
	//bubble sort
	for(i=0;i<9;i++){
		for(j=0;j<9-i;j++){
			if(strcmp(names[j],names[j+1])>0){
				strcpy(temp,names[j]);
				strcpy(names[j], names[j+1]);
				strcpy(names[j+1], temp);
			}
		}
	}
	
	printf("Sorted names (A to Z): \n");
	for(i=0;i<10;i++){
		printf("| %50s |",names[i]);
		printf("\n");
	}
	
 }
