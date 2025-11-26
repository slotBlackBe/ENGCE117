#include <stdio.h>

int main() {
    int N, i;

    printf("Enter number: ");

    if (scanf("%d", &N) != 1) {
        return 1; 
    }

    for (i = 0; i < N; i++) {
        printf("Hello World\n");
    }
    
    return 0;
}