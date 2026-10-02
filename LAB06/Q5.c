/*
 * ============================================================================
 * File Name    : Q5.c
 * Author       : Rameez Ahmed
 * Date Created : 10/2/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 06 - Q5
 * ============================================================================
 */
 
 #include <stdio.h>
 
 int main(){
 	int n;
	long long numfact = 1, denomfact1 = 1,denomfact2 = 1, catno = 0;
 	
 	printf("Enter a n number: \n");
 	scanf("%d", &n);
 	
 	for (int i=1;i<=(2*n);i++){
 		numfact = numfact * i;//numerator's factorial (2n)
	 }//endfor
	 
	 for(int i=1;i<=(n+1);i++){
	 	denomfact1 = denomfact1 * i; //(n+1) factorial
	 }//endfor
	 
	 for(int i=1;i<=n;i++){
	 	denomfact2 = denomfact2 * i; // n factorial
	 }//endfor
	 
	 catno = numfact/(denomfact1 * denomfact2); //catalan number
	 printf("The catalan number for n: %d is: %d", n, catno);
	 
	 return 0;
 	
 }//main end
