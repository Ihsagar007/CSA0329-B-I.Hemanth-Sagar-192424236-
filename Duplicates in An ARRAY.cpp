#include <stdio.h>
int main() {
    int arr[30], unique[30];
    int n, i, j, isDuplicate, newSize = 0;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);}
    for(i = 0; i < n; i++) {
        isDuplicate = 0;
        for(j = 0; j < newSize; j++) {
            if(arr[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if(isDuplicate == 0) {
            unique[newSize] = arr[i];
            newSize++;
        }
    }
    printf("Updated Array :\n");
    for(i = 0; i < newSize; i++) {
        printf("%d ", unique[i]);
    }
    return 0;
}
