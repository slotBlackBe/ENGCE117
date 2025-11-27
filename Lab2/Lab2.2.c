#include <stdio.h>

int main() {

    int itemCount;
    if (scanf("%d", &itemCount) != 1) {
        return 1;
    }

    float unitCost, grandTotal = 0.0f;
    int qty;

    for (int idx = 0; idx < itemCount; idx++) {
        scanf("%f", &unitCost);
        scanf("%d", &qty);
        
        float rawPrice = unitCost * qty;
        float discount = rawPrice;

        if (unitCost >= 1000.0f) {
            discount = rawPrice * 0.90f; 
        }

        grandTotal += discount;
    }

    printf("Grand Total: %.2f\n", grandTotal);
    return 0;
}