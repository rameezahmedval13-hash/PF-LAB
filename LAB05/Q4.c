/*
 * ============================================================================
 * File Name    : Q4.c
 * Author       : Rameez Ahmed
 * Date Created : 9/20/2026
 * Course       : Programming Fundamentals Lab (CL1002)
 * Lab / Task   : Lab 05 - Q4
 * ============================================================================
 */
 
 #include <stdio.h>
 
 int main(){
 	int maincateg, subcateg;
 	
 	printf("=====Rule Based AI Chatbot=====\n");
 	printf("\n+++++Conversation Category+++++\n");
 	printf("1. Greeting\n");
 	printf("2. Study\n");
 	printf("3. Weather\n");
 	printf("4. Help\n");
 	printf("Select a category [1-4]: ");
 	scanf("%d", &maincateg);
 	
 	switch(maincateg){
 		case 1:
 			printf("\n+++++Greeting Menu+++++\n");
 			printf("1. Hello\n");
 			printf("2.How are you\n");
 			printf("3. Goodbye\n");
 			printf("Select a option [1-3]: ");
 			scanf("%d", &subcateg);
 			
 			switch(subcateg){
 				case 1:
 					printf("Chatbot: Hello Sir, How can I help you today?\n");
 					break;
 				case 2:
 					printf("Chatbot: Even though chatbots don't have emotions, but I am great! what about you sir?\n'");
 					break;
 				case 3:
 					printf("Chatbot: Goodbye! see you soon sir.\n");
 					break;
 				default:
 					printf("Invalid choice");
			 }//end of case 1 switch
 			break;
 		case 2:
 			printf("\n+++++Study Menu+++++\n");
 			printf("1. Programming\n");
 			printf("2.Mathematics\n");
 			printf("3. Ai\n");
 			printf("Select a option [1-3]: ");
 			scanf("%d", &subcateg);
 			
 			switch(subcateg){
 				case 1:
 					printf("Chatbot: Having a strong command on basics is the way to go!\n");
 					break;
 				case 2:
 					printf("Chatbot: Calculus is essential for machine learning.\n");
 					break;
 				case 3:
 					printf("Chatbot: AI has emerging faster than humans thought!\n");
 					break;
 				default:
 					printf("Invalid choice");
			 }//end of case 2 switch
			 break;
		case 3:
			printf("\n+++++Weather Menu+++++\n");
 			printf("1. Today\n");
 			printf("2. Tomorrow\n");
 			printf("3. Forecast\n");
 			printf("Select a option [1-3]: ");
 			scanf("%d", &subcateg);
 			
 			switch(subcateg){
 				case 1:
 					printf("Chatbot: Today the weather is cloudy\n");
 					break;
 				case 2:
 					printf("Chatbot: Tomorrow rainfall is expected\n");
 					break;
 				case 3:
 					printf("Chatbot: The 7-day weather forecast predicts cold temperature\n");
 					break;
 				default:
 					printf("Invalid choice\n");
			 }//end of case 2 switch
			 break;
		case 4:
			printf("\n+++++Help Menu+++++\n");
 			printf("1. About Chatbot\n");
 			printf("2. Commands\n");
 			printf("3. Exit\n");
 			printf("Select a option [1-3]: ");
 			scanf("%d", &subcateg);
 			
 			switch(subcateg){
 				case 1:
 					printf("Chatbot: I am a newely made simple rule-based AI Chatbot!\n");
 					break;
 				case 2:
 					printf("Chatbot: Enter numbers from the range mentioned in menu/sub-menus to navigate though my menus\n");
 					break;
 				case 3:
 					printf("Chatbot: Exiting chat session...\n");
 					break;
 				default:
 					printf("Invalid choice\n");
			 }//end of case 2 switch
			 break;
		default:
			printf("Invalid choice");
			break;
	 }//end of main switch

 }
