#include "header.h"

void saveContact(AddressBook *addressBook)
{
    FILE *fptr = fopen("contact.txt", "w");
    for (int i = 0; i < addressBook->contactCount; i++)
    {
        fprintf(fptr, "%s,%s,%s\n", addressBook->contacts[i].name, addressBook->contacts[i].phone, addressBook->contacts[i].email);
    }
    fclose(fptr);

    printf("Contacts saved successfully\n");
}