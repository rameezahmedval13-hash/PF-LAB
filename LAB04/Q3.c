#include <stdio.h>

int main(){
	int totalrec;
	int missrec;
	int duprec;
	double missperc;
	double dupperc;
	
	printf("Enter Total number of records: ");
	scanf("%d", &totalrec);
	printf("Enter number of missing records: ");
	scanf("%d", &missrec);
	printf("Enter number of duplicate records: ");
	scanf("%d", &duprec);
	
	if (totalrec <= 0){
		printf("Invalid Dataset");
	}
	else{
		missperc = ((double)missrec/totalrec)*100.0;
		dupperc = ((double)duprec/totalrec)*100.0;
		
		if (missperc > 30){
			printf("Poor Quality Dataset");
		}
		else if(missperc<= 30 && dupperc > 20){
			printf("Dataset Requires Cleaning");
		}
		else{
			printf("Dataset Ready for Training");
		}
		
	}
}
