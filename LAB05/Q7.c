/*
 * ============================================================================
 * File Name    : Q7.c
 * Author       : Rameez Ahmed
 * Date Created : 9/23/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 05 - Q7
 * ============================================================================
 */
 
 #include <stdio.h>
 
 int main(){
 	float confid, thresh;
	
	printf("Enter your confidence score (0-100%%): \n");
	scanf("%f", &confid);
	
	printf("Enter required confidence threshold (0-100%%): \n");
	scanf("%f", &thresh);

	if (confid >=90.0){
		printf("Very High Confidence!\n");
	}//end of first if
	else{
		if (confid >= 75.0){
			printf("High Confidence\n");
		}//first nested if of main else
		else{
			if (confid >= 50.0){
				printf("Moderate Confidence\n");
			}
			else{
				printf("Low confidence\n");
			}//else of second nested if of main else
		}//else of first nested if of main else
	}//else of first if
	
	if (confid >= thresh && confid >=50.0){
		printf("Prediction Accepted\n");
	}
	else{
		printf("Prediction Rejected\n");
	}
 }//end of main
