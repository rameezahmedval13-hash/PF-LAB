/*
 * ============================================================================
 * File Name    : Q6.c
 * Author       : Rameez Ahmed
 * Date Created : 9/23/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 05 - Q6
 * ============================================================================
 */
 
 #include <stdio.h>
 
 int main(){
 	int probtype;
 	int alg;
 	
 	printf("========Machine Learning Algorithm Selector========\n");
 	printf("++++Type Of Problems++++\n");
 	printf("1. Classification\n");
 	printf("2. Regression\n");
 	printf("3. Clustering\n");
 	printf("4. Computer Vision\n");
 	printf("Select a problem [1-4]: \n");
 	scanf("%d", &probtype);
 	
 	switch(probtype){
 		case 1:
 			printf("\n====Classification Algorithms====\n");
 			printf("1. Logistic Regression\n");
 			printf("2. Decision Tree\n");
 			printf("3. K-Nearest Neighbors (KNN)\n");
 			printf("Select a Algorithm [1-3]:\n");
 			scanf("%d", &alg);
 			
 			switch(alg){
 				case 1:
 					printf("\nSelected: Classification -> Logistic Regression\n");
 					break;
 				case 2:
 					printf("\nSelected: Classification -> Decision Tree\n");
 					break;
 				case 3:
 					printf("\nSelected: Classification -> KNN\n");
 					break;
 				default:
 					printf("Invalid classification algorithm chosen");
 					break;
			 }//end of inner switch of case1
			 break;
		case 2:
 			printf("\n====Regression Algorithms====\n");
 			printf("1. Linear Regression\n");
 			printf("2. Polynomial Regression\n");
 			printf("3. Support Vector Regression (SVR)\n");
 			printf("Select a Algorithm [1-3]:\n");
 			scanf("%d", &alg);
 			
 			switch(alg){
 				case 1:
 					printf("\nSelected: Regression -> Linear Regression\n");
 					break;
 				case 2:
 					printf("\nSelected: Regression -> Polynomial Regression\n");
 					break;
 				case 3:
 					printf("\nSelected: Regression -> SVR\n");
 					break;
 				default:
 					printf("Invalid regression algorithm chosen");
 					break;
			 }//end of inner switch of case2
			 break;
		case 3:
 			printf("\n====Clustering Algorithms====\n");
 			printf("1. K-Means\n");
 			printf("2. Hierarchical Clustering\n");
 			printf("3. DBSCAN\n");
 			printf("Select a Algorithm [1-3]:\n");
 			scanf("%d", &alg);
 			
 			switch(alg){
 				case 1:
 					printf("\nSelected: Clustering -> K-Means\n");
 					break;
 				case 2:
 					printf("\nSelected: Clustering -> Hierarchical Clustering\n");
 					break;
 				case 3:
 					printf("\nSelected: Clustering -> DBSCAN\n");
 					break;
 				default:
 					printf("Invalid clustering algorithm chosen");
 					break;
			 }//end of inner switch of case2
			 break;
		case 4:
 			printf("\n====Computer Vision Algorithms====\n");
 			printf("1. Convolutional Neural Network (CNN)\n");
 			printf("2. You Only Look Once (YOLO)\n");
 			printf("3. Region-based CNN (R-CNN)\n");
 			printf("Select a Algorithm [1-3]:\n");
 			scanf("%d", &alg);
 			
 			switch(alg){
 				case 1:
 					printf("\nSelected: Computer Vision -> CNN\n");
 					break;
 				case 2:
 					printf("\nSelected: Computer Vision -> YOLO\n");
 					break;
 				case 3:
 					printf("\nSelected: Computer Vision -> R-CNN\n");
 					break;
 				default:
 					printf("Invalid computer vision algorithm chosen");
 					break;
			 }//end of inner switch of case2
			 break;
		default:
			printf("Invalid Problem selection");
		
	 }//end of  main switch
 }
