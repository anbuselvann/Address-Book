#include "header.h"

void deleteContact(AddressBook *addressbook)
{
    int ch;
    char name[30], phone[30], email[30];
    int found;
    while (1)
    {
        printf("-------------------- MENU --------------------\n");
        printf("1. Delete by Name\n");
        printf("2. Delete by Phone\n");
        printf("3. Delete by Email\n");
        printf("4. Exit\n");
        printf("----------------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        getchar();

        switch (ch)
        {
        case 1:
            printf("Enter the name to delete: ");
            scanf(" %[^\n]", name);
            found = 0;
            for (int i = 0; i < addressbook->contactCount; i++)
            {
                if (!strcmp(name, addressbook->contacts[i].name))
                {
                    for (int index = i; index < addressbook->contactCount; index++)
                    {
                        addressbook->contacts[index] = addressbook->contacts[index + 1];
                    }
                    found = 1;
                    addressbook->contactCount--;
                    printf("Successfully Deleted\n");
                }
            }
            if (!found)
                printf("Contact not found!\n");
            break;
        case 2:
            printf("Enter the phone number to delete: ");
            scanf(" %[^\n]", phone);
            found = 0;
            for (int i = 0; i < addressbook->contactCount; i++)
            {
                if (!strcmp(phone, addressbook->contacts[i].phone))
                {
                    for (int index = i; index < addressbook->contactCount; index++)
                    {
                        addressbook->contacts[index] = addressbook->contacts[index + 1];
                    }
                    found = 1;
                    addressbook->contactCount--;
                    printf("Successfully Deleted\n");
                }
            }
            if (!found)
                printf("Contact not found!\n");
            break;
        case 3:
            printf("Enter the email to delete: ");
            scanf(" %[^\n]", email);
            found = 0;
            for (int i = 0; i < addressbook->contactCount; i++)
            {
                if (!strcmp(email, addressbook->contacts[i].email))
                {
                    for (int index = i; index < addressbook->contactCount; index++)
                    {
                        addressbook->contacts[index] = addressbook->contacts[index + 1];
                    }
                    found = 1;
                    addressbook->contactCount--;
                    printf("Successfully Deleted\n");
                }
            }
            if (!found)
                printf("Contact not found!\n");
            break;
        case 4:
            return;
        default:
            printf("Enter a valid choice!\n");
        }
    }
}