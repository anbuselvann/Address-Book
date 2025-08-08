#include "header.h"

void searchContact(AddressBook *addressbook)
{
    int ch;
    char input[30];
    int found;
    while (1)
    {
        printf("1. Search by Name\n");
        printf("2. Search by Phone\n");
        printf("3. Search by Email\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        getchar();

        switch (ch)
        {
        case 1:
            printf("Enter the name to search: ");
            scanf(" %[^\n]", input);
            found = 0;
            for (int i = 0; i < addressbook->contactCount; i++)
            {
                if (!strcmp(input, addressbook->contacts[i].name))
                {
                    printf("Contact Details\n");
                    printf("%s %10s %-40s\n", addressbook->contacts[i].name, addressbook->contacts[i].phone, addressbook->contacts[i].email);
                    found = 1;
                }
            }
            if (!found)
                printf("Contact not found!\n");
            break;
        case 2:
            printf("Enter the phone number to search: ");
            scanf(" %[^\n]", input);
            found = 0;
            for (int i = 0; i < addressbook->contactCount; i++)
            {
                if (!strcmp(input, addressbook->contacts[i].phone))
                {
                    printf("Contact Details\n");
                    printf("%s %10s %-40s\n", addressbook->contacts[i].name, addressbook->contacts[i].phone, addressbook->contacts[i].email);
                    found = 1;
                }
            }
            if (!found)
                printf("Contact not found!\n");
            break;
        case 3:
            printf("Enter the email to search: ");
            scanf(" %[^\n]", input);
            found = 0;
            for (int i = 0; i < addressbook->contactCount; i++)
            {
                if (!strcmp(input, addressbook->contacts[i].email))
                {

                    printf("Contact Details\n");
                    printf("%s %10s %-40s\n", addressbook->contacts[i].name, addressbook->contacts[i].phone, addressbook->contacts[i].email);
                    found = 1;
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
