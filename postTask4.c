#include <stdio.h>
int main() {
    int item;
    float price, total = 0, disc;
    printf("Do you want to buy an item? (1 for yes, 0 for no): ");
    scanf("%d", &item);
    while (item == 1){
        printf("Enter the price of the item: ");
        scanf("%f", &price);
        total += price;
        printf("Do you want to buy another item? (1 for yes, 0 for no): ");
        scanf("%d", &item);
    }
    if(total > 10000){
        disc = total * 0.1;
        total -= disc;
        printf("You have received a discount of %.2f\n", disc);
    }
    printf("Total amount: %.2f\n", total);
    return 0;
}
