#include <stdio.h>
int main() {
    int A[10][10], B[10][10], Sum[10][10];
    int rows, cols, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\nResultant Matrix (A + B):\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("%d\t", Sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
