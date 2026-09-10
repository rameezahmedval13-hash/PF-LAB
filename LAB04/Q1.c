#include <stdio.h>

int main(){
	int num1, num2, num3;
	printf("Enter 3 numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num2 == num3 && num2<num1){
		printf("Num2 and Num3 are same, but smaller than num1 which has a value of: %d", num1);
	}
	else if(num1 > num2 && num1 > num3){
		printf("Num1 is the greatest with the value: %d", num1);
	}
	else if(num1 == num3 && num1 < num2){
		printf("Num1 and Num3 are same, but smaller than num2 which has a value of: &d", num2);
	}
	else if(num2 > num1 && num2 > num3){
		printf("Num2 is the greatest with the value: %d", num2);
	}
	else if(num1 == num2 && num1 < num3){
		printf("Num1 and Num2 are same, but smaller than num3 which has a value of: %d", num3);
	}
	else if(num3 > num1 && num3 > num2){
		printf("Num3 is the greatest with the value: %d", num3);
	}
	else if(num1 == num2 && num1 > num3){
		printf("Num1 and Num2 are same and greater than num with the value of: %d", num1);
	}
	else if(num2 == num3 && num2>num1){
		printf("Num2 and Num3 are same and greater than num1 with the value of: %d", num2);
	}
	else if(num1 == num3 && num1 > num2){
		printf("Num1 and Num3 are same and graeter than num2 with the value of: %d", num3);
	}
	else{
		printf("All numbers are same!");
	}
}
