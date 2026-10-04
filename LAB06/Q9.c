/*
 * ============================================================================
 * File Name    : Q9.c
 * Author       : Rameez Ahmed
 * Date Created : 10/4/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 06 - Q9
 * ============================================================================
 */
 
 #include <stdio.h>
 
 int main(){
 	char wordarr[100];
 	int length = 0;
 	char reversed[100];
 	int i;
 	int isPalin = 1;
 	int vowels = 0, consonants = 0;
 	
 	printf("Enter a word: \n");
 	scanf("%s", wordarr);
 	
 	//printing original word
 	printf("Original word: %s\n", wordarr);
 	
 	//finding length 
 	while (wordarr[length] != '\0'){
 		length++;
	 }//endwhile
	printf("Lenght of word: %d\n", length);
	 
	 //reversing word
	for (i=0;i<length;i++){
		reversed[i] = wordarr[length-1-i];//length-1-i starts from last valid index and decrements
	}//endfor
	reversed[length] = '\0'; //adding null terminator 
	printf("Reversed word: %s\n", reversed);
 	
 	//checking whether the word is a palindrome
 	for(i=0;i<length/2;i++){
 		if(wordarr[i] != wordarr[length-1-i]){
 			isPalin = 0;
 			break;
		 }//endif
	 }//endfor
	
 	if (isPalin == 1){
 		printf("It is a Palindrome\n");
	 }
	else{
		printf("Not a Palindrome\n");
	}//endif
 	
 	//counting vowels and consonants
 	for (i=0;i<length;i++){
 		char ch = wordarr[i];
 		
 		//converting uppercase to lowercase
 		if (ch >= 'A' && ch <= 'Z'){
 			ch = ch+32;
		 }//endif
		 
		 if(ch>='a' && ch<='z'){
		 	if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
		 		vowels++;
			 }
			else{
				consonants++;
			}//endinnerif
		 }//endif
	 }//endfor
	 
	 printf("Number Of Vowels: %d\n", vowels);
	 printf("Number Of Consonants: %d\n", consonants);
 	
 	return 0;
 }//end main
