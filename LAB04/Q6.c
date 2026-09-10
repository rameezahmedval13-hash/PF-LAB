#include <stdio.h>

int main(){
	int obstatus;
	int perstatus;
	double battperc;
	
	printf("Enter Obstacle Status (1= Detected, 0= Not Detected): ");
	scanf("%d", &obstatus);
	printf("Enter Person Status (1= Detected, 0= Not Detected): ");
	scanf("%d", &perstatus);
	printf("Enter battery percentage: ");
	scanf("%lf", &battperc);
	
	if (obstatus == 1){
		if (perstatus == 1){
			printf("Emergency Stop!\n");
		}
		else{
			printf("Change Direction\n");
		}
	}
	else if(obstatus == 0){
		if (battperc <20.0){
			printf("Return to Charging Station\n");
		}
		else{
			printf("Continue Moving\n");
		}
	}
	else{
		printf("Invalid obstatus");
	}
}
