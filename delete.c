#include "phone.h"

void deleteByName(){
	printf(">> Enter a name to delete: \n");
	char name[10];
	scanf("%s", &name);
	for(int i = 0; i < size; i++){
		if (name == PhoneBook[i].Name){
			for (int j = i; j < (size-1); j++){
				PhoneBook[j] = PhoneBook[j+1];
			printf("%s is deleted...\n",name);
			size--;
			}
		}
		else {
			printf("Oops! %s is not in the PhoneBook.\n", name);
		}
	}
}

