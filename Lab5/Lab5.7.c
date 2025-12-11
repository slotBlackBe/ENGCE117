#include <stdio.h>
#define SIZE 5

void sort_array_ascending(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

void print_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int numbers[SIZE];
    int original_copy[SIZE];

    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
        original_copy[i] = numbers[i];
    }

    sort_array_ascending(numbers, SIZE);

    printf("--- ARRAY SORTING REPORT ---\n");
    printf("Original Array: ");
    print_array(original_copy, SIZE);
    printf("Sorted Array (Ascending): ");
    print_array(numbers, SIZE);

    return 0;
}
