/*
 * ============================================================================
 * File Name    : Q9.c
 * Author       : Rameez Ahmed
 * Date Created : 9/24/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 05 - Q9
 * ============================================================================
 */
 
 #include <stdio.h>
 #include <math.h>
 
 int main(){
 	int selection;
 	double num,x,y;
 	double z, w, b;
 	
 	printf("=====Mathematical Operatons' Menu=====\n");
 	printf("1. Square Root\n");
 	printf("2. Power\n");
 	printf("3. Absolute Value\n");
 	printf("4. Floor\n");
 	printf("5. Ceiling\n");
 	printf("Enter your selection [1-5]: \n");
 	scanf("%d", &selection);
 	switch(selection){
 		case 1:
 			printf("Enter a number: ");
 			scanf("%lf", &num);
 			if (num >=0){
 				printf("Square root: %.2lf",sqrt(num));
			 }
			else{
				printf("Invalid Input: Enter a number equal or greater than 0\n");
			}
			break;
		case 2:
			printf("Enter x and y in order for x^y\n");
			scanf("%lf %lf", &x,&y);
			printf("Result: %.2lf\n",pow(x,y));
			break;
		case 3:
			printf("Enter a number: ");
			scanf("%lf", &z);
			printf("Absolute Value: %.2lf\n",fabs(z));
			break;
		case 4:
			printf("Enter a number: ");
			scanf("%lf", &w);
			printf("Floor value: %.2lf\n", floor(w));
			break;
		case 5:
			printf("Enter a number: ");
			scanf("%lf", &b);
			printf("Ceiling value: %.2lf\n", ceil(b));
			break;
		default:
			printf("Invalid selection: choose an option from 1 to 5");
			break;
	 }//end of main switch
	 return 0;
 }//end of main
 
