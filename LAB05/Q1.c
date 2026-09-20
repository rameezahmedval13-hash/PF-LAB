/*
 * ============================================================================
 * File Name    : Q1.c
 * Author       : Rameez Ahmed
 * Date Created : 9/20/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 05 - Q1
 * ============================================================================
 */

#include <stdio.h>

int main(){
	int progmark;
	int mathmark;
	int aimark;
	float attperc;
	float avg;
	
	printf("Enter your programming marks: ");
	scanf("%d", &progmark);
	printf("Enter Mathematics marks: ");
	scanf("%d", &mathmark);
	printf("Enter your Ai marks: ");
	scanf("%d", &aimark);
	printf("Enter your attendance percentage: ");
	scanf("%f", &attperc);
	
	if (attperc >=75.0){
		if(progmark >= 50){
			if (mathmark >= 50){
				if (aimark >= 50){
					avg = (progmark + mathmark + aimark)/3.0;
					
					if (avg >= 80.0){
						printf("Excellent Performance with average: %.2f\n", avg);
					}
					else if (avg >= 70.0){
						printf("Very Good Performance with average: %.2f\n", avg);
					}
					else if(avg >= 60.0){
						printf("Good Performance with average: %.2f\n", avg);
					}
					else if(avg >= 50.0){
						printf("Satisfactory Performance with average: %.2f\n", avg);
					}	
					else{
						printf("Poor Performance with average: %.2f\n", avg);
					}
				}//end of fourth
				else{
					printf("Student is not Eligible\n");
				}//else of fourth
			}//end of third if
			else{
				printf("Student is not Eligible\n");
			}//else of third if
			
		}//end of second if
		else{
			printf("Student is not Eligible\n");
		}//else of second if
		
	}//end of first if
	else{
		printf("Student is not Eligible\n");
	}
	

}
