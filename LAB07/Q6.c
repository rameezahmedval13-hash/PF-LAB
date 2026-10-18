/*
 * ============================================================================
 * File Name    : Q6.c
 * Author       : Rameez Ahmed
 * Date Created : 10/17/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 07 - Q6
 * ============================================================================
 */
 
 #include <stdio.h>
 
 int main(){
 	int shifts[4][3];
 	int r, targetInd, c;
 	
 	
 	for(r = 0; r<3; r++){
 		printf("Enter production data for workstation %d (3 shifts): \n", r+1);
 		for(c=0;c<3;c++){
 			scanf("%d", &shifts[r][c]);
		 }//endfor
	 }//endfor
	
 
	 printf("Enter row index for insertion (0-4): \n");
	 scanf("%d", &targetInd);
	 
	 if(targetInd >= 0 && targetInd < 4){
	 	for(r = 3; r>targetInd;r--){
	 		for(c=0;c<3;c++){
	 			shifts[r][c] = shifts[r-1][c];
			 }//endfor
		 }//endfor
		 
		printf("Enter 3 new production values for the emergency shift at row %d: \n", targetInd);
		for(c=0;c<3;c++){
			scanf("%d", &shifts[targetInd][c]);
		}//endfor
		
		printf("\nResulting 4x3 production matrix:\n");
		for(r=0;r<4;r++){
			for(c=0;c<3;c++){
				printf("%d\t", shifts[r][c]);
			}//endfor
			printf("\n");
		}//endfor
		
	 }
	 else{
	 	printf("Invalid target index!\n");
	 }//endif
	 
	 return 0;
 }//end main
