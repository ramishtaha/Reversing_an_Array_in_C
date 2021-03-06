#include <stdio.h>


void arr_reverse(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[100], size, i;
    printf("Enter the size of Array\n");
    scanf("%d", &size);
    printf("Enter the elements of Array\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The original Array!\n");
    for (i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    arr_reverse(arr, size);
    printf("The reversed Array!\n");
    for (i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
    return 0;
}
