#include <stdio.h>

int main() {
    int n, i, j, space;

    // Get the number of rows for the pyramid from the user
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop for each row
    for (i = 1; i <= n; i++) {
        // Print spaces before stars
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }

        // Print stars for the pyramid
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}