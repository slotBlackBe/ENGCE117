#include <stdio.h>

int main() {
    int N, i;
    int countFizzBuzz = 0;
    int countFizz = 0;
    int countBuzz = 0;
    int countOther = 0;

    if (scanf("%d", &N) != 1) {
        return 1;
    }

    for (i = 1; i <= N; i++) {

        if (i % 15 == 0) {
            countBuzz++;
        }

        else if (i % 3 == 0) {
            countFizz++;
        }

        else if (i % 5 == 0) {
            countFizzBuzz++;
        }

        else {
            countOther++;   
        }
    }

    printf("Cont FizzBuzz: %d\n", countFizzBuzz);
    printf("Count Fizz: %d\n", countFizz);    
    printf("Count Buzz: %d\n", countBuzz);
    printf("Count Other: %d\n", countOther);

    return 0;
}