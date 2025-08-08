#include "header.h"

void listContact(AddressBook *addressbook)
{
    printf("\nContact Details:\n");
    if(addressbook->contactCount == 0){
        printf("No contacts have been registered!\n");
    }
    for (int i = 0; i < addressbook->contactCount; i++)
    {
        printf("%3d. %-30s %10s %-40s\n", i + 1, addressbook->contacts[i].name, addressbook->contacts[i].phone, addressbook->contacts[i].email);
    }
} 