/*
 * ============================================================================
 * File Name    : Q7.c
 * Author       : Rameez Ahmed
 * Date Created : 10/17/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 07 - Q7
 * ============================================================================
 */
 
 #include <stdio.h>
 
 int main(){
 	float sensor_data[3][4];
 	int r,c,delInd;
 	
 	for(r=0;r<3;r++){
 		printf("Enter data of 4 sensors for day %d: \n",r+1);
 		for(c=0;c<4;c++){
 			printf("Sensor#: %d\n", c+1);
 			scanf("%f", &sensor_data[r][c]);
		 }//endfor
	 }//endfor
	 
	 printf("Enter the column index for deletion (0-3): \n");
	 scanf("%d", &delInd);
	 
	 if(delInd>=0 && delInd <4){
	 	for(r=0;r<3;r++){
	 		for(c=delInd;c<3;c++){
	 			sensor_data[r][c] = sensor_data[r][c+1];
		 	}//endfor
	 	}//endfor
	 
	 	printf("Updated 3x3 matrix: \n");
	 	for(r=0;r<3;r++){
	 		for(c=0;c<3;c++){
	 			printf("%.2f\t",sensor_data[r][c]);
		 	}//endfor
		 	printf("\n");
	 }//endfor	 	
	 	
	 }else{
	 	printf("Invalid column index\n");
	 }//endif

	 
	 return 0;
	 
 }//end main
