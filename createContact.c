#include "header.h"

void createContact(AddressBook *addressbook)
{
    char name[30], phone[30], email[50];
    int valid;
    if (addressbook->contactCount > 99)
    {
        printf("The address book can store a maximum of 100 contacts. You cannot add any more entries at this time.");
        return;
    } 

    do
    {
        printf("Enter the name: ");
        scanf(" %[^\n]", name);
        valid = validateName(addressbook, name);
        if (!valid)
            printf("The name is invalid or already exists! Please try again.\n");
    } while (!valid);

    do
    {
        printf("Enter the phone: ");
        scanf(" %[^\n]", phone);
        valid = validatePhone(addressbook, phone);
        if (!valid)
            printf("The phone number is invalid or already exists! Please try again.\n");
    } while (!valid);

    do
    {
        printf("Enter the email: ");
        scanf(" %[^\n]", email);
        valid = validateEmail(addressbook, email);
        if (!valid)
            printf("The email is invalid or already exists! Please try again.\n");
    } while (!valid);

    strcpy(addressbook->contacts[addressbook->contactCount].name, name);
    strcpy(addressbook->contacts[addressbook->contactCount].phone, phone);
    strcpy(addressbook->contacts[addressbook->contactCount].email, email);
    addressbook->contactCount++;

    printf("Contact added successfully!\n");
}