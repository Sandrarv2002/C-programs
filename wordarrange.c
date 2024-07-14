#include <stdio.h>
#include <string.h>

int main() {
    char s[20];
    int l, i, j;
    char temp;

    printf("\nEnter a word: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';  // Remove newline character from input

    l = strlen(s);

    // Sorting the string using bubble sort
    for (i = 0; i < l - 1; i++) {
        for (j = 0; j < l - i - 1; j++) {
            if (s[j] > s[j + 1]) {
                // Swap characters
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    printf("Sorted word: %s\n", s);
    return 0;
}

