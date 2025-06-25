#include <stdio.h>

int main() {
    int a[100], b[100], c[200];  // Arrays
    int n1, n2, i, k = 0;

    // Input for first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    // Input for second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    // Merging arrays into c[]
    for(i = 0; i < n1; i++) {
        c[k] = a[i];
        k++;
    }
    for(i = 0; i < n2; i++) {
        c[k] = b[i];
        k++;
    }

    // Print merged array
    printf("Merged Array:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
