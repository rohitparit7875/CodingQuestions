#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    int year;
};

int main() {
    struct Book b;
    
    printf("Enter book title: ");
    fgets(b.title, sizeof(b.title), stdin);

    printf("Enter author name: ");
    fgets(b.author, sizeof(b.author), stdin);

    printf("Enter publication year: ");
    scanf("%d", &b.year);

    printf("\n--- Book Details ---\n");
    printf("Title: %s", b.title);
    printf("Author: %s", b.author);
    printf("Year: %d\n", b.year);

    return 0;
}
