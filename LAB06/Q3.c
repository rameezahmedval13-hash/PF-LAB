/*
 * ============================================================================
 * File Name    : Q3.c
 * Author       : Rameez Ahmed
 * Date Created : 10/2/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 06 - Q3
 * ============================================================================
 */
 
 #include <stdio.h>
 #include <stdlib.h>
 
 int main(){
 	int attendance[30];
 	int prescount = 0, abscount = 0;
 	
 	for (int i=0; i<30; i++){
 		do{
 			printf("Enter attendance status (1: Present, 0: Absent):\n");
 			scanf("%d", &attendance[i]);
 			
 			if (attendance[i] != 1 && attendance[i] != 0){
 				printf("ERROR: Invalid input please enter 1 or 0\n");
			 }//endif
		 }while(attendance[i] != 1 && attendance[i] != 0);
 		
	 }//endfor
	 
	 for (int j=0;j<30;j++){
	 	if(attendance[j] == 1){
	 		prescount = prescount + 1;
		 }
		else{
			abscount = abscount + 1;
		}//endif
	 }//endfor
	 
	 system("cls");
	 
	 printf("The number of present students: %d\n", prescount);
	 printf("The number of absent students: %d\n", abscount);
	 
	 return 0;
 }//end of main
