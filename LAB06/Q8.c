/*
 * ============================================================================
 * File Name    : Q8.c
 * Author       : Rameez Ahmed
 * Date Created : 10/3/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 06 - Q8
 * ============================================================================
 */
 
 #include <stdio.h>
 
 int main(){
 	
 	int intarr[8];
 	
 	//inserting elements
 	for (int i=0;i<8;i++){
 		printf("Enter a integer: \n");
 		scanf("%d", &intarr[i]);
	 }//endfor
	 
	int smallest = intarr[0];
 	int largest = intarr[0];
 	
 	printf("Array elements: \n");
 	//printing elements of array
 	for (int i=0;i<8;i++){
 		printf("%d",intarr[i]);
 		printf("|");
	 }//endfor
 	
 	for(int i=1;i<8;i++){
 		if (intarr[i]>largest){
 			largest = intarr[i];
		 }
		else if(intarr[i]<smallest){
			smallest = intarr[i];
		}//endif
	 }//endfor
 	
 	printf("\n");
 	printf("Smallest integer in the array: %d \n", smallest);
 	printf("Largest integer in the array: %d \n", largest);
 	
 }//end main
