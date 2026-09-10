#include <stdio.h>

int main(){
	double modacc;
	double predlat;
	int apprstatus;
	
	printf("Enter Model Accuracy in %: ");
	scanf("%lf", &modacc);
	printf("Enter Prediction Latency: ");
	scanf("%lf", &predlat);
	printf("Enter Model Approval Status (1 = Approved , 0 = Not Approved): ");
	scanf("%d", &apprstatus);
	
	if (apprstatus != 1 && apprstatus != 0){
		printf("Invalid input");
	}
	else{
		if (modacc >= 90.0 && predlat <= 100.0 && apprstatus == 1){
			printf("Model Deployed");
		}
		else{
			if (modacc < 90.0){
				printf("Accuracy too low \n");
			}
			if (predlat > 100.0){
				printf("Latency too high \n");
			}
			if (apprstatus == 0){
				printf("Model not approved \n");
			}
		}
	}

}

