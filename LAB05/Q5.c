/*
 * ============================================================================
 * File Name    : Q5.c
 * Author       : Rameez Ahmed
 * Date Created : 9/20/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 05 - Q5
 * ============================================================================
 */
 
 #include <stdio.h>
 
 int main(){
 	float conf;
 	int usrtype;
 	
 	printf("Enter Confidence Score (%%): ");
 	scanf("%f", &conf);
 	printf("Enter User Type (1: Authorized, 0: Unauthorized): ");
 	scanf("%d", &usrtype);
 	
 	if (conf >= 80.0){
 		printf("Face Recognized\n");
 		
 		(usrtype == 1)?printf("\nACCESS GRANTED\n"):printf("\nACCESS DENIED: User not Authorized\n");
	 }//end of first if
	 else{
	 	if (conf >=50.0){
	 		printf("Manual Verification Needed\n");
		 }//end of first if in else
		else{
			printf("\nACCESS DENIED: Confidence Score below 50.0%%\n");
		}
	 }//else of first if
 }
