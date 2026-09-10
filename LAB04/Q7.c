#include <stdio.h>

int main(){
	double dataused;
	double pricepgb;
	double basiccost;
	double disc_rate;
	double disc_amount;
	double final_cost;
	
	printf("Enter Data used in GB: ");
	scanf("%lf", &dataused);
	printf("Enter Price per GB: ");
	scanf("%lf", &pricepgb);
	
	basiccost= dataused * pricepgb;
	
	if (dataused < 50.0){
		disc_rate = 0.0;
	}
	else if(dataused <=99.0){
		disc_rate = 0.05;
	}
	else if(dataused <=199.0){
		disc_rate = 0.10;
	}
	else{
		disc_rate = 0.15;
	}
	
	disc_amount = basiccost * disc_rate;
	final_cost = basiccost - disc_amount;
	
	printf("\nBasic Cost: $%.2f\n", basiccost);
	printf("Discount Amount: $%.2f\n", disc_amount);
	printf("Final Cost: $%.2f\n", final_cost);
}
