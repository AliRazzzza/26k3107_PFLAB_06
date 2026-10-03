#include <stdio.h>
int main() {
    float cart[5];
    float total = 0, disc;
    for(int i = 0; i < 5; i++) {
        printf("Enter the price of item %d: ", i + 1);
        scanf("%f", &cart[i]);
        total += cart[i];
    }
    if(total > 10000){
        disc = total * 0.1;
        total -= disc;
        printf("You received a discount of %.2f\n", disc);
    }
    printf("Total amount: %.2f\n", total);
    return 0;
}
