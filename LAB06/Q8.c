/*
 * ============================================================================
 * File Name    : Q8.c
 * Author       : Rameez Ahmed
 * Date Created : 10/4/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 06 - Q8
 * ============================================================================
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 
 
 int main(){
	int intarr[10];
	int size = 8;
	int i;
	//inserting elements in array
	for (i = 0; i<size; i++){
		printf("Enter a integer: \n");
		scanf("%d", &intarr[i]);
	}//endfor
	
	//clearing the input prompts 
 	system("cls");
 	
 	//printing the array
 	printf("Array elements: \n");
 	for (i = 0; i<size; i++){
 		printf("%d", intarr[i]);
 		printf("|");
	 }//endfor
	 printf("\n\n");
	 
	 int smallest = intarr[0];
	 int largest = intarr[0];
	 //searching for  the  largest and smallest element in the array
	 for (i=1;i<8;i++){
	 	if(intarr[i] > largest){
	 		largest = intarr[i];
		 }
		else if(intarr[i]< smallest){
			smallest = intarr[i];
		}//endif
	 }//endfor
	 
	 printf("The smallest integer in the array is: %d\n", smallest);
	 printf("The largest integer in the array is: %d\n\n", largest);
	 
	 //searching for a specific number
	 int num;
	 
	 printf("Enter a number for searching: \n");
	 scanf("%d", &num);
	 
	 int flag = 0;//set to false
	 int j = 0;
	 
	 while(flag == 0 && j<size){
	 	if (intarr[j]==num){
	 		printf("Number was found on the array index: %d\n", j);
	 		flag = 1;
		 }
		else{
			j=j+1;
		}//endif
	 }//endwhile
 	
 	if (flag == 0){
 		printf("Number was not found in the array\n");
	 }//endif
	 
	 //inserting a new element at specific index
	 int val, insertind;
	 
	 printf("Enter value to insert: \n");
	 scanf("%d", &val);
	 printf("Enter index to insert  at (0 - %d): \n", size);
	 scanf("%d", &insertind);
	 //validating inputs
	 if (insertind >=0 && insertind <=size){
	 	//shifting elements
	 	for (i = size; i>insertind;i--){
	 		intarr[i] = intarr[i-1];
		 }//endfor
		 intarr[insertind] = val;
		 size++; 
	 }
	 else{
	 	printf("Invalid index for insertion\n");
	 }//endif
	 
	 //deleting an element from a specific index
	 int delind;
	 
	 printf("Enter index of element to delete(0-%d): \n", size - 1);
	 scanf("%d", &delind);
	 //validation
	 if (delind >=0 && delind < size){
	 	//shifting element to left and overwriting the element we want to del
	 	for (i = delind; i<size-1;i++){
	 		intarr[i]=intarr[i+1];
		 }//endfor
		 size--;
	 }
	 else{
	 	printf("Invalid index for deletion\n");
	 }//endif
	 
	 //printing final array
	 printf("\n Final Array elements:\n");
	 for (i=0; i<size;i++){
	 	printf("%d",intarr[i]);
	 	printf("|");
	 }//endfor
	 printf("\n");
	 
 	
 }//end main
