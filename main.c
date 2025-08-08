// main file

#include "header.h"

int main()
{
    AddressBook addressbook;

    initialize(&addressbook);
    int choice;
    char ch;
    int save = 1;
    while (1)
    {
        printf("-------------------- MENU --------------------\n");
        printf("1.List Contacts\n");
        printf("2.Create Contacts\n");
        printf("3.Search Contacts\n");
        printf("4.Edit Contacts\n");
        printf("5.Delete Contacts\n");
        printf("6.Save Contacts\n");
        printf("7.Exit\n");
        printf("----------------------------------------------\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            listContact(&addressbook);
            break;
        case 2:
            createContact(&addressbook);
            save = 0;
            break;
        case 3:
            searchContact(&addressbook);
            break;
        case 4:
            editContact(&addressbook);
            save = 0;
            break;
        case 5:
            deleteContact(&addressbook);
            save = 0;
            break;
        case 6:
            saveContact(&addressbook);
            save = 1;
            break;
        case 7:
            if (save)
            {
                printf("Exited Successfully\n");
                exit(0);
            }
            else
            {
                printf("You haven't saved the contact information yet! Do you like to proceed without saving? (y/n): ");
                while (1)
                {
                    scanf(" %c", &ch);
                    if (ch == 'n' || ch == 'N')
                    {
                        saveContact(&addressbook);
                        printf("Exited Successfully\n");
                        exit(0);
                    }
                    else if (ch == 'y' || ch == 'Y')
                    {
                        printf("Exited Successfully\n");
                        exit(0);
                    }
                    else
                    {
                        printf("Please enter a valid choice (y/n):");
                    }
                }
            }
        }
    }
    return 0;
}