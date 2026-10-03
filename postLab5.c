#include <stdio.h>
int main() {
    int order;
    float price, total = 0, disc;
    printf("Do you order? (1 for yes, 0 for no): ");
    scanf("%d", &order);
    while (order == 1){
        printf("Enter the price of the dish: ");
        scanf("%f", &price);
        total += price;
        printf("Do you want to buy another dish? (1 for yes, 0 for no): ");
        scanf("%d", &order);
    }
    if(total > 5000){
        disc = total * 0.05;
        total -= disc;
        printf("You have received a discount of %.2f\n", disc);
    }
    printf("Total amount: %.2f\n", total);
    return 0;
}
