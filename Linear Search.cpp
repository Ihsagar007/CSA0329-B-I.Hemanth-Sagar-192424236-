#include <stdio.h>

int main() {
    int arr[100], size, i, key, found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for(i = 0; i < size; i++) {
        if(arr[i] == key) {
            printf("Element %d found at index %d (position %d)\n", key, i, i+1);
            found = 1;
            break; 
        }
    }

    if(!found)
        printf("Element %d not found in the array.\n", key);

    return 0;
}
