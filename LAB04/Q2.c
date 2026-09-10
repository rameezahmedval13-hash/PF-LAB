#include <stdio.h>

int main(){
	int confscore;
	
	printf("Enter the confidence score: ");
	scanf("%d", &confscore);
	
	if(confscore < 0 || confscore >100){
		printf("Invalid Score");
	}
	else if(confscore >= 0 && confscore <= 49){
		printf("Low Confidence");
	}
	else if(confscore >= 50 && confscore <= 79){
		printf("Moderate Confidence");
	}
	else if(confscore >= 80 && confscore <= 100){
		printf("High Confidence");
	}
}
