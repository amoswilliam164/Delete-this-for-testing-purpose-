/*
Name   : Amos William
Adm No : BCS-02-0076/2026
Course : Computer Science
Unit   : Structured Programming And Algorithms
Program: Mobile Data Bundle Purchase
*/

#include <stdio.h>
int main()
{
	int choice;//%d
	
	printf("Select your data bundle option:\n");
	printf("1. 100MB @ 50  KES\n");
	printf("2. 500MB @ 200 KES\n");
	printf("3. 1GB   @ 350 KES\n");
	printf("4. 2GB   @ 600 KES");
	
	printf("\nEnter your choice (1-4):");
	scanf("%d", &choice);
	
	if(choice=1){
		printf("You selected 100MB which costs = 50 KES ");
	}
	
	else if(choice=2){
		printf("You selected 500MB which costs = 200 KES");
	}
	else if(choice=3){
		printf("You selected 1GB which costs = 350 KES ");
	}
	else if(choice=4){
		printf("You selected 2GB which costs = 600 KES ");
	}
	else
	{
		printf("Invalid choice");
	}
	return 0;
}