// array of sturcure

# define MAX 50

struct Contact
{
    char Name[10];
    char PhoneNumber[13];
};

extern struct Contact PhoneBook[MAX];

extern int size;  // store the actual numbers of PhoneBook
