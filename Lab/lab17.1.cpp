#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

// สร้าง struct สำหรับเก็บข้อมูลหนังสือ
struct Book {
    int id;
    char title[100];
    char author[100];
    int year;
};

// Function เพิ่มหนังสือ
void addBook(struct Book books[], int *count) {
    printf("Enter Book ID: ");
    scanf("%d", &books[*count].id);
    getchar(); // กำจัด '\n'

    printf("Enter Title: ");
    fgets(books[*count].title, 100, stdin);
    books[*count].title[strcspn(books[*count].title, "\n")] = 0;

    printf("Enter Author: ");
    fgets(books[*count].author, 100, stdin);
    books[*count].author[strcspn(books[*count].author, "\n")] = 0;

    printf("Enter Year: ");
    scanf("%d", &books[*count].year);
    getchar(); // กำจัด '\n'

    *count = *count + 1;
    printf("Book added successfully!\n");
}

// Function ค้นหาหนังสือตามชื่อ
void searchBook(struct Book books[], int count, char title[]) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("Book ID: %d\n", books[i].id);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Year: %d\n", books[i].year);
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("Book not found.\n");
    }
}

// Function แสดงหนังสือทั้งหมด
void displayBooks(struct Book books[], int count) {
    if (count == 0) {
        printf("No books in the library.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("Book ID: %d\n", books[i].id);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Year: %d\n", books[i].year);
        printf("--------------------\n");
    }
}

// โปรแกรมหลัก
int main() {
    struct Book library[MAX_BOOKS];
    int count = 0;
    int choice;
    char searchTitle[100];

    while (1) {
        printf("\nLibrary Menu:\n");
        printf("1. Add a new book\n");
        printf("2. Search book by title\n");
        printf("3. Display all books\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);
        getchar(); // กำจัด '\n'

        if (choice == 1) {
            addBook(library, &count);
        } else if (choice == 2) {
            printf("Enter Title to Search: ");
            fgets(searchTitle, 100, stdin);
            searchTitle[strcspn(searchTitle, "\n")] = 0;
            searchBook(library, count, searchTitle);
        } else if (choice == 3) {
            displayBooks(library, count);
        } else if (choice == 4) {
            printf("Exiting program.\n");
            break;
        } else {
            printf("Invalid option. Try again.\n");
        }
    }

    return 0;
}
