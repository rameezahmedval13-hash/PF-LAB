/*
 * ============================================================================
 * File Name    : Q1.c
 * Author       : Rameez Ahmed
 * Date Created : 11/08/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 10 - Q1
 * ============================================================================
 */
 
#include <stdio.h>
#include <string.h>

int main(){
	char feedback[200];
	char updated_feedback[250] = "";
	
	printf("Enter customer feedback: ");
	fgets(feedback, sizeof(feedback), stdin);
	
	//removing new line character 
	feedback[strcspn(feedback, "\n")] = 0;
	
	printf("Total characters: %lu\n", strlen(feedback));
	
	if(strstr(feedback, "bad") != NULL){
		printf("Sentiment: Negative (Requires Sanitization)\n");
		
		char *match = strstr(feedback, "bad");
		int index = match - feedback;
		
		//copy everything before "bad"
		strncpy(updated_feedback, feedback, index);
		updated_feedback[index] = '\0';
		
		//appending not good and the rest of original string
		strcat(updated_feedback, "not good");
		strcat(updated_feedback, match + 3);
		
		printf("Updated Review: %s\n", updated_feedback);
	}else if(strstr(feedback, "good") != NULL){
		printf("Sentiment: Positive\n");
	}else{
		printf("Sentiment: Neutral\n");
	}
	
	return 0;
}
