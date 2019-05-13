#include "phone.h"

void printAll(){
	printf("<< Display all contents in the PhoneBook >>\n");
	for(int i = 0; i < size; i++){
		printf("%s\t%s\n", PhoneBook[i].Name, PhoneBook[i].PhoneNumber);
	}
}

void searchByName(){
	char name[10];
	printf(">> Enter a name to search: ");
	scanf("%s", &name);
	for(int i = 0; i < size; i++){
		if (name == PhoneBook[i].Name){
			printf("%s\t%s\n", PhoneBook[i].Name, PhoneBook[i].PhoneNumber);
		}
		else {
			printf("Oops! %s is not int the PhoneBook.\n", name);
		}
	}
} 	
		
