void deleteByName(){
	printf(">> Enter a name to delete: \n");
	char name[10];
	scanf("%s", &name);
	for(int i = 0; i < size; i++){
		if (name == PhoneBook[i]){
			PhoneBook[i].Name = Null;
			PhoneBook[i].PhoneNumber = Null;
			printf("%s is deleted...\n",name);
		}
		else {
			printf("Oops! %s is not in the PhoneBook.\n", name);
		}
}
