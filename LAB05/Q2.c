/*
 * ============================================================================
 * File Name    : Q2.c
 * Author       : Rameez Ahmed
 * Date Created : 9/20/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 05 - Q2
 * ============================================================================
 */
 
 #include <stdio.h>
 
 int main(){
 	int age;
 	float monthlyinc;
 	float credscore;
 	char loanstat;
 	
 	printf("Enter your age: \n");
 	scanf("%d", &age);
 	printf("Enter your monthly income: \n");
 	scanf("%f", &monthlyinc);
 	printf("Enter your credit score: \n");
 	scanf("%f", &credscore);
 	printf("Enter your existing loan status (Y: Yes, N: No): \n");
 	scanf(" %c", &loanstat);

	if (age >=21){
		if (monthlyinc >= 100000.0 && credscore >=750.0 && (loanstat == 'N' || loanstat == 'n')){
			printf("High Approval Chance\n");
		}//end of second if
		else if(monthlyinc >= 75000.0 && credscore >=650.0 && (loanstat == 'Y' || loanstat == 'y')){
			printf("Manual Review Required\n");
		}//end of first elif
		else if(monthlyinc >= 50000.0 && credscore >= 600.0){
			printf("Possibly Eligible\n");
		}//end of second elif
		else{
			printf("Rejected\n");
		}//else of second if
	}//end of first if
	else{
		printf("Rejected\n");
	}//else of first if
 }
