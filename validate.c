    #include "header.h"

    int validateName(AddressBook *addressbook, char *name)
    {
        for (int i = 0; name[i] != '\0'; i++)
        {
            if (!isalpha(name[i]) && name[i] != ' ')
            {
                return 0;
            }
        }

        for (int i = 0; i < addressbook->contactCount; i++)
        {
            if (strcasecmp(name, addressbook->contacts[i].name) == 0)
            {
                return 0;
            }
        }
        return 1;
    }

    int validatePhone(AddressBook *addressbook, char *phone)
    {
        if (strlen(phone) != 10)
        {
            return 0;
        }

        for (int i = 0; phone[i] != '\0'; i++)
        {
            if (!isdigit(phone[i]))
            {
                return 0;
            }
        }

        for (int i = 0; i < addressbook->contactCount; i++)
        {
            if (strcmp(phone, addressbook->contacts[i].phone) == 0)
            {
                return 0;
            }
        }
        return 1;
    }

    int validateEmail(AddressBook *addressbook, char *email)
    {
        const char *at = strchr(email, '@');
        const char *dot = strrchr(email, '.');

        if (!at || !dot || at == email || dot < at + 5 || *(dot + 1) == '\0')
        {
            return 0;
        }

        for (int i = 0; i < addressbook->contactCount; i++)
        {
            if (strcmp(email, addressbook->contacts[i].email) == 0)
            {
                return 0;
            }
        }
        return 1;
    }
