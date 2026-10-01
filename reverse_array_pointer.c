#include <stdio.h>

int main() {
    int arr[5];
    int *ptr;

    printf("Enter 5 numbers:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr + 4;

    printf("\nArray in Reverse Order:\n");

    for (int i = 4; i >= 0; i--) {
        printf("%d ", *ptr);
        ptr--;
    }

    printf("\n");

    return 0;
}
