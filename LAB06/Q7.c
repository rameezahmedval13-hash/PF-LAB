/*
 * ============================================================================
 * File Name    : Q7.c
 * Author       : Rameez Ahmed
 * Date Created : 10/3/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 06 - Q7
 * ============================================================================
 */
 
 #include <stdio.h>
 
 int main(){
 	int n;
 	
 	printf("Enter a number: \n");
 	scanf("%d", &n);
	
	//loop for row	of upper half
	for (int row = 1 ; row <=n; row++){
		
		//loop for outerspaces (i is the number of times loop prints spaces and n-row is the formula for calculating outerspaces for e.g first row needs 4 spaces before printing *)
		for (int i = 1; i <= n-row; i++){
			printf(" ");
		}//endfor
		
		//checking if row is 1 (as it will only have one star after n-1 outerspaces)
		if (row == 1){
			printf("*");
		}//endif
		else{
			//printing the first start after outerspaces of n-2,n-3...)
			printf("*");
			
			//loop for innerspaces
			for(int j = 1; j<=2*row - 3; j++){
				printf(" ");
			}//endfor
			printf("*");
		}
		printf("\n");
	}//endfor
	
	//loop for row lower half (will run n-1 times as the upper part covers n rows)
	for(int row = 1; row<=n-1;row++){
		//checking if its the last row of bottom half
		if (row == n-1){
			//prints outerspace of n-1 
			for(int i = 1; i<=n-1; i++){
				printf(" ");
			}//endfor
			printf("*");
		}
		else{
			//loop for outerspace of lower half 
			for(int j = 0 ; j<row; j++){
				printf(" ");
			}//endfor
			//prints first star in the lower half row
			printf("*");
			//prints inner spaces starting from 2n-3 means the max inner space and decrements by 1 
			for(int k = 2*n-3; k>=2*row+1;k-=1){
				printf(" ");
			}//endfor
			printf("*");
		}//endif
		printf("\n");
	}//endfor
	return 0;
 }//end main
