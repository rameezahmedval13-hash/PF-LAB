#include <stdio.h>

int main(){
	char name[50];
	int age;
	float height;
	char grade;
	float cgpa;
	
	printf("Enter your name: ");
	scanf("%49[^\n]s", name);
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("Enter your height: ");
	scanf("%f", &height);
	printf("Enter your grade: ");
	scanf(" %c", &grade);
	printf("Enter your cgpa: ");
	scanf("%f", &cgpa);
	
	printf("=========STUDENT REPORT=========\n\n");
	printf("Name:\t%s\n", name);
	printf("Age:\t%d\n", age);
	printf("Height:\t%.2f\n", height);
	printf("Cgpa:\t%.2f\n", cgpa);
	
}
