#include <stdio.h>

int main(){
	int role;
	int accstat;
	int seclvl;
	
	printf("Enter User's role (1 = Admin, 2 = Researcher, 3 = Student): ");
	scanf("%d", &role);
	printf("Enter Account Status (1 = Active , 0 = Inactive): ");
	scanf("%d", &accstat);
	printf("Enter Security Level: ");
	scanf("%d", &seclvl);
	
	if (accstat == 0){
		printf("Access Denied");
	}
	else if(accstat ==1){
		if (role == 1 && seclvl >=3 ){
			printf("Admin Access Granted");
		}
		else if (role ==2 && seclvl >=2){
			printf("Researcher Access Granted");
		}
		else if (role == 3 && seclvl >=1){
			printf("Student Access Granted");
		}
		else{
			printf("Acces Denied");
		}
	}
	else{
		printf("Invalid Account Status");
	}
}
