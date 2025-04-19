#include <stdio.h>


struct Books {
    char name[100];
    float price;
    int year;
    int total;
};

int main() {
    int n;


    printf("Enter the number of books: ");
    scanf("%d", &n);


    struct Books books[n];


    for (int i = 0; i < n; ++i) {
        printf("\nEnter details for Book %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", books[i].name); 

        printf("Price: ");
        scanf("%f", &books[i].price);

        printf("Year of Publishing: ");
        scanf("%d", &books[i].year);

        printf("Quantity: ");
        scanf("%d", &books[i].total);
    }


    printf("\nBooks with price greater than 200:\n");
    for (int i = 0; i < n; ++i) {
        if (books[i].price > 200) {
            printf("Name: %s, Price: %.2f, Year of Publishing: %d, Quantity: %d\n",
                   books[i].name, books[i].price, books[i].year, books[i].total);
        }
    }


    printf("\nBooks with Year of Publishing greater than 2015:\n");
    for (int i = 0; i < n; ++i) {
        if (books[i].year > 2015) {
            printf("Name: %s, Price: %.2f, Year of Publishing: %d, Quantity: %d\n",
                   books[i].name, books[i].price, books[i].year, books[i].total);
        }
    }


    printf("\nTotal amount spent in purchasing each book:\n");
    for (int i = 0; i < n; ++i) {
        float totalAmount = books[i].price * books[i].total;
        printf("Name: %s, Total Amount: %.2f\n", books[i].name, totalAmount);
    }

    return 0;
}
