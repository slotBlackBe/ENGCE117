#include <stdio.h>
#define DAYS 7

int main() {
    int daily_temps[DAYS];
    int max_temp;
    int i;
    
    for (i = 0; i < DAYS; i++) {
        scanf("%d", &daily_temps[i]);
    }

    max_temp = daily_temps[0];
    for (i = 1; i < DAYS; i++) {
        if (daily_temps[i] > max_temp) {
            max_temp = daily_temps[i];
        }
    }

    printf("DAILY TEMPERATURE REPORT-\n");
    printf("Recorded Temperatures (C): ");

    for (i = 0; i < DAYS; i++) {
        printf("%d ", daily_temps[i]);
        if (i < DAYS - 1) {
            printf(" ");
        }
    }

    printf("\n");
    printf("Maximum Temperature Found: %d\n", max_temp);

    if (max_temp >= 35) {
        printf("Weather is HOT!\n");
    } else {
        printf("Weather is MODERATE.\n");
    }

    return 0;
}