#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct
{
    char name[30];
    char phone[30];
    char email[30];
} Contact;

typedef struct
{
    Contact contacts[100];
    int contactCount;
} AddressBook;

void createContact(AddressBook *addressBook);
void searchContact(AddressBook *addressBook);
void editContact(AddressBook *addressBook);
void deleteContact(AddressBook *addressBook);
void listContact(AddressBook *addressBook);
void initialize(AddressBook *addressBook);
void saveContact(AddressBook *addressBook);
int validateName(AddressBook *addressbook, char *name);
int validatePhone(AddressBook *addressbook, char *phone);
int validateEmail(AddressBook *addressbook, char *email);
