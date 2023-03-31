#include <stdio.h>
#include <string.h>

struct book {
    char title[50];
    char author[50];
    int publication_year;
    float price;
};

void display_books(struct book books[], int num_books) {
    printf("Books published after 2010:\n");

    for (int i = 0; i < num_books; i++) {
        if (books[i].publication_year > 2010) {
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Publication Year: %d\n", books[i].publication_year);
            printf("Price: %.2f\n\n", books[i].price);
        }
    }
}

int main() {
    struct book my_books[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter title for book %d: ", i+1);
        fgets(my_books[i].title, 50, stdin);
        printf("Enter author for book %d: ", i+1);
        fgets(my_books[i].author, 50, stdin);
        printf("Enter publication year for book %d: ", i+1);
        scanf("%d", &my_books[i].publication_year);
        printf("Enter price for book %d: ", i+1);
        scanf("%f", &my_books[i].price);
        getchar(); 
    }

    display_books(my_books, 3);

    return 0;
}
