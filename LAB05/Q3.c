/*
 * ============================================================================
 * File Name    : Q3.c
 * Author       : Rameez Ahmed
 * Date Created : 9/20/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 05 - Q1
 * ============================================================================
 */
 
 #include <stdio.h>
 
 int main(){
 	int maincateg, subcateg;
 	
 	printf("=====IMAGE CLASSIFICATION PROGRAM=====\n");
 	printf("1. Animal\n");
 	printf("2. Vehicle\n");
 	printf("3. Food\n");
 	printf("4. Human\n");
 	printf("Select a category [1-4]: ");
 	scanf("%d", &maincateg);
 	
 	switch(maincateg){
 		case 1:
 			printf("\n====Animal Sub Categories====\n");
 			printf("1. Cat\n");
 			printf("2. Dog\n");
 			printf("3. Bird\n");
 			printf("Select a sub-category [1-3]: ");
 			scanf("%d", &subcateg);
 			
 			switch(subcateg){
 				case 1:
 					printf("\nClassification: Animal is a cat\n");
 					break;
 				case 2:
 					printf("\nClassification: Animal is a dog\n");
 					break;
 				case 3:
 					printf("\nClassification: Animal is a bird\n");
 					break;
 				default:
 					printf("\nInvalid Animal Subcategory\n");
 					break;
			 }//end of case1's inner switch
			 break;
		case 2:
			printf("\n====Vehicle Sub Categories====\n");
 			printf("1. Car\n");
 			printf("2. Bus\n");
 			printf("3. Bike\n");
 			printf("Select a sub-category [1-3]: ");
 			scanf("%d", &subcateg);
 			
			switch(subcateg){
 				case 1:
 					printf("\nClassification: Vehicle is a car\n");
 					break;
 				case 2:
 					printf("\nClassification: Vehicle is a bus\n");
 					break;
 				case 3:
 					printf("\nClassification: Vehicle is a bike\n");
 					break;
 				default:
 					printf("\nInvalid Vehicle Subcategory\n");
 					break;
			 }//end of case2's inner switch
			 break;
		case 3:
			printf("\n====Food Sub Categories====\n");
 			printf("1. Pizza\n");
 			printf("2. Burger\n");
 			printf("3. Biryani\n");
 			printf("Select a sub-category [1-3]: ");
 			scanf("%d", &subcateg);
 			
 			switch(subcateg){
 				case 1:
 					printf("\nClassification: Food is Pizza\n");
 					break;
 				case 2:
 					printf("\nClassification: Food is Burger\n");
 					break;
 				case 3:
 					printf("\nClassification: Food is Biryani\n");
 					break;
 					default:
 						printf("\nInvalid Food Subcategory\n");
 						break;
			 }//end of case3's inner switch
			 break;
		case 4:
			printf("\n====Human Sub Categories====\n");
 			printf("1. Male\n");
 			printf("2. Female\n");
 			printf("3. Child\n");
 			printf("Select a sub-category [1-3]: ");
 			scanf("%d", &subcateg);
 			
 			switch(subcateg){
 				case 1:
 					printf("\nClassification: Human is a Male\n");
 					break;
 				case 2:
 					printf("\nClassification: Human is a Female\n");
 					break;
 				case 3:
 					printf("\nClassification: Human is a child\n");
 					break;
 				default:
 					printf("\nInvalid Human Subcategory\n");
 					break;
			 }//end of case3's inner switch
			 break;
		default:
			printf("\nInvalid Main Category\n");
			break;
	 }//end of first switch
 }
