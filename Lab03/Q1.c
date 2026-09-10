#include <stdio.h>

int main(){
	char usrname[50];
	int age;
	char city[50];
	printf("Enter your name: ");
	scanf("%s", &usrname);
	printf("Enter your age: ");
	scanf("%u", &age);
	printf("Enter your city: ");
	scanf("%s", &city);
	
	printf("Name: %s \n", usrname);
	printf("Age: %u \n", age);
	printf("City: %s \n", city);
	}
