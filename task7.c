#include <stdio.h>
int main() {
    int i= 1, price, totalbill= 0, ordernum = 0;
    char dish[20];
    printf("Do you want to order? (1/0): ");
    scanf("%d", &i);
    while(i==1) {
        printf("Enter the dish name: ");
        scanf("%s", dish);
        printf("Enter the price of %s: ", dish);
        scanf("%d", &price);
        totalbill += price;
        ordernum++;
        printf("Do you want to order again? (1/0): ");
        scanf("%d", &i);
    }

    printf("Total bill: %d\n", totalbill);
    printf("Number of orders: %d\n", ordernum);
    return 0;
}
