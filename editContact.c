#include "header.h"

void editContact(AddressBook *addressbook)
{
    int ch, valid, found;
    char name[30], phone[30], email[30];
    while (1)
    {
        printf("-------------------- MENU --------------------\n");
        printf("1. Edit by Name\n");
        printf("2. Edit by Phone\n");
        printf("3. Edit by Email\n");
        printf("4. Exit\n");
        printf("----------------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        getchar();

        switch (ch)
        {
        case 1:
            printf("Enter the name you want to edit: ");
            scanf(" %[^\n]", name);
            found = 0;
            for (int i = 0; i < addressbook->contactCount; i++)
            {
                if (!strcmp(name, addressbook->contacts[i].name))
                {
                    do
                    {
                        printf("Enter the new name: ");
                        scanf(" %[^\n]", name);
                        valid = validateName(addressbook, name);
                        if (valid)
                        {
                            strcpy(addressbook->contacts[i].name, name);
                            printf("Name successfully updated!\n");
                            found = 1;
                            break;
                        }
                        else
                        {
                            printf("The name is invalid or already exists! Please try again.\n");
                        }
                    } while (!valid);
                }
            }
            if (!found)
                printf("Contact not found!\n");
            break;
        case 2:
            printf("Enter the phone number you want to edit: ");
            scanf(" %[^\n]", name);
            found = 0;
            for (int i = 0; i < addressbook->contactCount; i++)
            {
                if (!strcmp(phone, addressbook->contacts[i].phone))
                {
                    do
                    {
                        printf("Enter the new phone number: ");
                        scanf(" %[^\n]", phone);
                        valid = validatePhone(addressbook, phone);
                        if (valid)
                        {
                            strcpy(addressbook->contacts[i].phone, phone);
                            printf("Phone number successfully updated!\n");
                            found = 1;
                            break;
                        }
                        else 
                        {
                            printf("The phone number is invalid or already exists! Please try again.\n");
                        }
                    } while (!valid);
                }
                if (!found)
                    printf("Contact not found!\n");
                break;
            case 3:
                printf("Enter the email you want to edit: ");
                scanf(" %[^\n]", name);
                found = 0;
                for (int i = 0; i < addressbook->contactCount; i++)
                {
                    if (!strcmp(name, addressbook->contacts[i].name))
                    {
                        do
                        {
                            printf("Enter the new email: ");
                            scanf(" %[^\n]", name);
                            valid = validateEmail(addressbook, email);
                            if (valid)
                            {
                                strcpy(addressbook->contacts[i].name, email);
                                printf("Email successfully updated!\n");
                                found = 1;
                                break;
                            }
                            else
                            {
                                printf("The email is invalid or already exists! Please try again.\n");
                            }
                        } while (!valid);
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
    }
}