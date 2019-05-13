#include "phone.h"

void registerPhoneData(){
	size = 0;
	char password[11];
	static int bookSize = 0;
	static int wrongPassword = 0; 
	printf("Password:\n");
	scanf("%s", &password);
	if(password == "qwerty1234"){
		char name[10];
		printf("New User Name: ");
		scanf("%s", &name);
		char number[13];
		printf("PhoneNumber: ");
		scanf("%s", &number);
		PhoneBook[bookSize].Name = name;
		PhoneBook[bookSize].PhoneNumber = number;
		printf("Registered...\n");
		bookSize++;
		size = bookSize;
	}
	else {
		wrongPassword++;
		switch(wrongPassword)
		{
			case 1: printf(">>Not Matched !!!\n"); scanf("%s", &password); break;
			case 2: printf(">>Not Matched (twice) !!!\n"); scanf("%s", &password); break;
			case 3: printf(">>Not Matched (3 times) !!!\n"); scanf("%s", &password); break;
			case 4: printf(">>You are not allowed to access PhoneBook.\n"); break;
		}
	}
}	
