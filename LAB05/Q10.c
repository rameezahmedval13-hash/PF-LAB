/*
 * ============================================================================
 * File Name    : Q10.c
 * Author       : Rameez Ahmed
 * Date Created : 9/24/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 05 - Q10
 * ============================================================================
 */
 
 #include <stdio.h>
 #include <math.h>
 
 #define view 1
 #define train 2 
 #define test 4
 #define deploy 8
 
 int main(){
 	float accur,conf, modelscore;
 	int datasize,usrrole,modstatus;
 	int user_perm = 0;
 	
 	printf("=================================\n");
 	printf("++++++ AI Decision Engine ++++++\n");
 	printf("=================================\n");
 	printf("Enter Ai model's accuracy (0-100%%): \n");
 	scanf("%f", &accur);
 	printf("Enter confidence score (0-100%%): \n");
 	scanf("%f", &conf);
 	printf("Enter dataset size: \n");
 	scanf("%d", &datasize);
 	printf("Enter user role (1:Admin, 2:Developer, 3:Researcher)");
 	scanf("%d",&usrrole);
 	printf("Enter model status(1:Ready, 2:Testing, 3:Training): \n");
 	scanf("%d", &modstatus);
 	
 	modelscore = (accur + conf)/2.0f;
 	
 	switch(usrrole){
 		case 1:
 			user_perm = view | train | test | deploy;
 			break;
 		case 2:
			switch(modstatus){
				case 1:
				case 2:
					user_perm = view|test|deploy;
					break;
				case 3:
					user_perm = view|train|test;
					break;
				default:
					user_perm = view;
					break;
			}
			break;
		case 3:
			user_perm = view | train | test;
			break;
		default:
			user_perm = 0;
			break;
	 }
	 
	int can_deploy = (user_perm & deploy) ? 1:0;
	
	if (accur >= 80.0f && conf >= 75.0f && datasize >=1000 && modstatus == 1 && can_deploy == 1 ){
		printf("SUCCESS: Model Approved for Deployement!\n");
	}
	else{
		printf("REJECTED: Requirements not met\n");
	}
	
	printf("===============================\n");
	printf("Model Average Score: %.2f%%\n", modelscore);
	printf("Floor Score: %.0f%%\n", floor(modelscore));
	printf("Memory Footprint: %d bytes\n", sizeof(accur) + sizeof(conf) + sizeof(datasize));
	printf("===============================\n");
		
	return 0;
 }
