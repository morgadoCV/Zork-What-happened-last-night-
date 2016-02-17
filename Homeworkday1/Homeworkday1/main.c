#include<stdio.h>
#include<stdlib.h>



int main(){
	enum rooms{ quit, dinningroom, kitchen, bathroom, bedroom, pantry };
	
	char direction = 'z';
	
	int myroom = dinningroom;
	printf("Use n, s, e or w to move through the rooms. Use q if you wanna quit.\n");
	
	while (direction != 'q'){
		if (myroom == dinningroom){
			printf("You are at the dinningroom.\n");
			while (myroom == dinningroom){
				direction = getchar(); getchar();
				if (direction == 'n'){
					myroom = kitchen;
				}
				else if (direction == 'e'){
					myroom = bathroom;
				}
				else if (direction == 's'){
					myroom = bedroom;
				}
				else if (direction == 'w'){
					printf("You can't climb walls!\n");
				}
				else if (direction == 'q'){
					myroom = quit;
				}
				else{
					printf("Can't understand what you wrote.\n");
				}
				
			}
		}
		if (myroom == kitchen){
			printf("You are at the kitchen.\n");
			while (myroom == kitchen){
				direction = getchar(); getchar();
				if (direction == 's'){
					myroom = dinningroom;
				}
				else if (direction == 'e'){
					myroom = pantry;
				}
				else if (direction != 's' || direction != 'e'){
					printf("You can't climb walls!");
				}
				else if (direction == 'q'){
					myroom = quit;
				}
				else{
					printf("Can't understand what you wrote.\n");
				}
			}
		}
		if (myroom == pantry){
			printf("You are at the pantry.\n");
			while (myroom == pantry){
				direction = getchar(); getchar();
				if (direction == 'w'){
					myroom = kitchen;
				}
				else if (direction == 'n'||direction=='e'){
					printf("You can't climb walls!\n");
				}
				else if (direction == 'n'){
					printf("You can't climb walls!\n");
				}
				else if (direction == 'q'){
					myroom = quit;
				}
				else{
					printf("Can't understand what you wrote.\n");
				}
				
			}
		}
		if (myroom == bathroom){
			printf("You are at the bathroom\n");
			while (myroom == bathroom){
				direction = getchar(); getchar();
				if (direction == 'w'){
					myroom = dinningroom;
				}
				else if (direction == 'e'||direction=='s'||direction=='n'){
					printf("You can't climb walls!)");
				}
				else if (direction == 'q'){
					myroom = quit;
				}
				else{
					printf("Can't understand what you wrote.\n");
				}
			}
		}
		if (myroom == bedroom){
			printf("You are at the bedroom.\n");
			while (myroom = bedroom){
				direction = getchar(); getchar();
				if (direction == 'n'){
					myroom = dinningroom;
				}
				else if (direction == 's'||direction=='e'||direction=='w'){
					printf("You can't climb walls!");
				}
				else if (direction == 'q'){
					myroom = quit;
				}
				else{
					printf("Can't understand what you wrote.\n");
				}
			}

			
		}
		
		
	}
	printf("Cya\n\n");




	system("pause");
	return 0;
}
