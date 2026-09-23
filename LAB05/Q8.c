/*
 * ============================================================================
 * File Name    : Q8.c
 * Author       : Rameez Ahmed
 * Date Created : 9/23/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 05 - Q8
 * ============================================================================
 */
 
 #include <stdio.h>
 
 #define view 1
 #define train 2
 #define test 4
 #define deploy 8
 int main(){
 	int perm;
 	
 	printf("Enter user permission value[0-15]: \n");
 	scanf("%d", &perm);
 	
 	printf("\nGranted Permissions:\n");
 	
 	if (perm & view){
 		printf("View Model: Allowed\n");
	 }
	else{
		printf("View Model: Denied\n");
	}
	
	if (perm & train){
		printf("Train Model: Allowed\n");
	}
	else{
		printf("Train Model: Denied\n");
	}
	
	if (perm & test){
		printf("Test Model: Allowed\n");
	}
	else{
		printf("Test Model: Denied\n");
	}
	
	if (perm & deploy){
		printf("Deploy Model: Allowed\n");
	}
	else{
		printf("Deploy Model: Denied\n");
	}
	
	if ((perm&train)&&(perm&deploy)){
		printf("User has both training and deployement permission: Yes\n");
	}
	else{
		printf("User has both training and deployement permission: No\n");
	}
 }
