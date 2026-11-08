/*
 * ============================================================================
 * File Name    : Q3.c
 * Author       : Rameez Ahmed
 * Date Created : 11/08/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 09 - Q3
 * ============================================================================
 */
 
 #include <stdio.h>
 
 int main(){
 	
 	int image[3][3];
 	int (*ptr)[3]= image;
 	int i,j;
 	//value store
 	printf("Enter values for all nine pixels: \n");
 	for(i = 0;i<3;i++){
 		
 		for(j=0;j<3;j++){
 			scanf("%d", *(ptr + i) + j);
		 }
	 }
 	//multiply by 2
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			*(*(ptr + i) +j) *= 2;
		}
	}
	//display
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%3d |", *(*(ptr + i) + j));
		}
		printf("\n");
	}
	
	return 0;
	
 }
