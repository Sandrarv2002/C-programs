#include <stdio.h>

int main() {
    int a[100][100], i, j, m, n;
    int isIdentity = 1, isZero = 1, isUnity = 1;

    printf("\nENTER THE NUMBER OF ROWS AND COLUMNS: ");
    scanf("%d%d", &m, &n);

    if (m != n) {
        printf("\nThe matrix must be square (number of rows must equal number of columns).\n");
        return 1;
    }

    printf("\nENTER THE ELEMENTS:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {  // Check diagonal elements
                if (a[i][j] != 1) {
                    isIdentity = 0;
                }
            } else {  // Check off-diagonal elements
                if (a[i][j] != 0) {
                    isIdentity = 0;
                }
            }

            // Check for zero matrix
            if (a[i][j] != 0) {
                isZero = 0;
            }

            // Check for unity matrix
            if (a[i][j] != 1) {
                isUnity = 0;
            }
        }
    }

    if (isIdentity) {
        printf("\nIdentity matrix\n");
    } else if (isZero) {
        printf("\nZero matrix\n");
    } else if (isUnity) {
        printf("\nUnity matrix\n");
    } else {
        printf("\nThe matrix is neither identity, zero, nor unity matrix.\n");
    }

    return 0;
}

