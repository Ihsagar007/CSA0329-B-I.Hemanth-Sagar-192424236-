#include <stdio.h>

int main() {
    int arr[50];
    int n = 0, i, val, pos, choice, found;
    printf("Enter initial size of the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    while(1) {
        printf("\nMenu:\n");
        printf("1. Insert\n2. Delete\n3. Search\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                if(n >= 50) {
                    printf("Array is full!\n");
                    break;
                }
                printf("Enter position to insert (0 to %d): ", n);
                scanf("%d", &pos);
                if(pos < 0 || pos > n) {
                    printf("Invalid position!\n");
                    break;
                }
                printf("Enter value to insert: ");
                scanf("%d", &val);
                for(i = n; i > pos; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[pos] = val;
                n++;
                printf("Inserted successfully.\n");
                break;
            case 2:
                if(n == 0) {
                    printf("Array is empty!\n");
                    break;
                }
                printf("Enter position to delete (0 to %d): ", n - 1);
                scanf("%d", &pos);
                if(pos < 0 || pos >= n) {
                    printf("Invalid position!\n");
                    break;
                }
                for(i = pos; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                printf("Deleted successfully.\n");
                break;
            case 3: 
                printf("Enter value to search: ");
                scanf("%d", &val);
                found = 0;
                for(i = 0; i < n; i++) {
                    if(arr[i] == val) {
                        printf("Value %d found at position %d\n", val, i);
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    printf("Value %d not found!\n", val);
                }
                break;
            case 4: 
                if(n == 0) {
                    printf("Array is empty!\n");
                } else {
                    printf("Array elements: ");
                    for(i = 0; i < n; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;
            case 5:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
