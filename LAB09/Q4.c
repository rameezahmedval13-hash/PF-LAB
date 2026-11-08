/*
 * ============================================================================
 * File Name    : Q4.c
 * Author       : Rameez Ahmed
 * Date Created : 11/08/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 09 - Q4
 * ============================================================================
 */
 
 #include <stdio.h>
 
 //function declaration 
 int add(int a, int b);
 int multiply(int a, int b);
 int findMax(int a, int b);
 int compute(int a, int b, int(*op)(int,int));
 
 int main(){
 	int num1,num2;
 	int sum,product,max;
 	
	printf("Enter integer#1: \n");
	scanf("%d",&num1);
	printf("Enter integer#2: \n");
	scanf("%d",&num2);	
	
	sum = compute(num1,num2,add);
	product = compute(num1,num2,multiply);
	max = compute(num1,num2,findMax);
	
	printf("Sum: %d\n", sum);
	printf("Product: %d\n", product);
	printf("Maximum Value: %d\n", max);
 }
 
 //function definitions
 int add(int a, int b){
 	return a + b;
 }
 
 int multiply(int a, int b){
 	return a*b;
 }
 
 int findMax(int a, int b){
 	if (a>b){
 		return a;
	 }else{
	 	return b;
	 }
 }
 
 int compute(int a, int b, int (*op)(int,int)){
	return op(a,b);
 }
