#include <stdio.h>

int main() {
    char *books[3];           // Array of pointers
    static char names[3][50]; // To store actual book names

    for (int i = 0; i < 3; i++) {
        printf("Enter book name %d: ", i + 1);
        scanf(" %[^\n]", names[i]);  // Accept string with spaces
        books[i] = names[i];         // Assign pointer
    }

    printf("\nYou entered these book names:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", books[i]);
    }

    return 0;
}