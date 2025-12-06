#include <stdio.h>
#define SIZE 5

int calculate_sum(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}

int main() {
    int numbers[SIZE];
    int total_sum;
    float average;

    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
    }

    total_sum = calculate_sum(numbers, SIZE);

    average = (float)total_sum / SIZE;

    printf("--- ARRAY AVERAGE REPORT ---\n");
    printf("Recorded Numbers: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    printf("Total Sum: %d\n", total_sum);
    printf("Average: %.2f\n", average);

    return 0;
}
