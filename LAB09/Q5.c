/*
 * ============================================================================
 * File Name    : Q5.c
 * Author       : Rameez Ahmed
 * Date Created : 11/08/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 09 - Q5
 * ============================================================================
 */
 
#include <stdio.h>
 
void  printSensorData(char dataType, void *ptr);

int main(){
	float temperature = 25.5;
	int motionStatus = 1;
	char doorLockStatus = 'O';
	
	printf("--- Smart Home IoT Sensor Readings --- \n");
	printSensorData('f', &temperature);
	printSensorData('i', &motionStatus);
	printSensorData('c', &doorLockStatus);
	
	return 0;
}

void printSensorData(char dataType, void *ptr){
	if (dataType == 'f'){
		printf("Temperature: %.2f Celsius\n", *(float*)ptr);
	}else if(dataType == 'i'){
		int motion = *(int*)ptr;
		if (motion == 1){
			printf("Motion Detected\n");
		}else if (motion == 0){
			printf("No Motion\n");
		}
	}else if(dataType == 'c'){
		char door = *(char*)ptr;
		if (door == 'O'){
			printf("Door Open\n");
		}else if(door == 'C'){
			printf("Door Closed\n");
		}
	}
}
