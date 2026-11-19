#include <stdio.h>

int main() {
    int m, n, p, q;
    printf("enter the no of row and coloumns of array a:");


    scanf("%d %d", &m, &n);

    int a[m][n];
    printf("enter the values of array a:");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
     printf("\nenter the no of row and coloumns of array b:");

    scanf("%d %d", &p, &q);
     printf("\nenter the values of array b:");

    int b[p][q];
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    if (n != p) {
        printf("Matrix Multiplication not possible");
        return 0;
    }

    int c[m][q];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            *(*(c + i) + j) = 0;

            for (int k = 0; k < n; k++) {
                *(*(c + i) + j) += (*(*(a + i) + k)) * (*(*(b + k) + j));
            }
        }
    }
    printf("values of array c is:\n");
    

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d\t", *(*(c + i) + j);
        }
        printf("\n");
    }

    return 0;
}
