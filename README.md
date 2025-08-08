# 📒 Address Book Management System (C Project)

A simple, menu-driven **Address Book Management System** developed in C, designed to manage contact details such as name, phone number, and email. It supports functionalities like creating, listing, editing, searching, deleting, and saving contacts. All contacts are stored in a file (`contact.txt`) for persistent storage.

---

## 🧠 Features

* ➕ **Add New Contact** with name, phone, and email validation
* 🧾 **List All Contacts** with serial number formatting
* 🔍 **Search Contact** by name, phone number, or email
* 📝 **Edit Contact** (update name, phone, or email)
* ❌ **Delete Contact** by name, phone number, or email
* 💾 **Save Contact** information to `contact.txt` file
* 🛡️ **Input Validation**:

  * Names must be alphabetic
  * Phone numbers must be 10 digits and unique
  * Email must follow a valid pattern and be unique
* 🧠 **Data Persistence**: contacts are saved and loaded automatically from `contact.txt`

---

## 📂 File Structure

```
.
├── create_contact.c
├── delete_contact.c
├── edit_contact.c
├── search_contact.c
├── list_contact.c
├── save_contact.c
├── initialize.c
├── validate.c
├── main.c
├── header.h
└── contact.txt
```

---

## 🔧 How It Works

1. On start, the program reads existing contacts from `contact.txt`.
2. A menu interface allows users to choose actions: list, add, search, edit, delete, or save.
3. All changes are stored in memory until the user explicitly saves them.
4. Before exiting, if unsaved changes exist, the user is prompted to save.

---

## 📑 Data Format (inside `contact.txt`)

```
Name,Phone,Email
Example Name,9876543210,example@mail.com
```

---

## 🖥️ How to Run

### Prerequisites:

* GCC or any C compiler
* Terminal/command prompt

### Compilation:

```bash
gcc *.c -o main
```

### Execution:

```bash
./main.out  # For Linux
```

---

## 🛠 Technologies Used

* Language: **C**
* File I/O: `fopen`, `fscanf`, `fprintf`
* Validation: Custom logic using `<ctype.h>` and `<string.h>`

---

