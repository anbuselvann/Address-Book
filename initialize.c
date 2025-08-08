#include "header.h"

void initialize(AddressBook *addressbook)
{ 
    FILE *fptr = fopen("contact.txt", "r");
    if (fptr == NULL)
    {
        fptr = fopen("contact.txt", "w"); 
        addressbook->contactCount = 0;
    }
    else
    {
        char name[30], phone[30], email[50];
        int i = 0;

        while (fscanf(fptr, "%[^,],%[^,],%[^\n]\n", name, phone, email) == 3 && i < 100)
        {
            strcpy(addressbook->contacts[i].name, name);
            strcpy(addressbook->contacts[i].phone, phone);
            strcpy(addressbook->contacts[i].email, email);
            i++;
        }

        addressbook->contactCount = i;
        fclose(fptr);
    }
}
