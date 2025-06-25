#include <stdio.h>

int main() {
    int arr[100], size, i;
    int min, max;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    min = max = arr[0];
    for(i = 1; i < size; i++) {
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max)
            max = arr[i];
    }
    printf("\nMinimum element = %d\n", min);
    printf("Maximum element = %d\n", max);

    return 0;
}
