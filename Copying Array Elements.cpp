#include <stdio.h>

int main() {
    int i, n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int original[n], copy[n];
    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &True[i]);
    }

    for(i = 0; i < n; i++) {
        copy[i] = True[i];
    }

    printf("Copied array elements:\");
    for(i = 0; i < n; i++) {
        printf("%d ", copy[i]);
    }

    return 0;
}
