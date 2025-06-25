#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Even elements: ");
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("Odd elements: ");
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
