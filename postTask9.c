#include <stdio.h>
int main() {
    int unit[5];
    float bill, tbill = 0;
    int totalu = 0, high, low;
    for(int i = 0; i < 5; i++){
        printf("Enter the unit consumed for house %d: ", i + 1);
        scanf("%d", &unit[i]);
        totalu += unit[i];
        if(unit[i] > 0){
            high = unit[i];

        }else if(unit[i] < 1000){
            low = unit[i];
        }
        bill = unit[i] * 10;
        if(unit[i] > 500){
            bill = bill +  bill * 0.05;
        }
        tbill += bill;
        printf("The bill for house %d is: %.2f\n", i + 1, bill);
    }
    printf("Total units consumed: %d\n", totalu);
    printf("Total bill: %.2f\n", tbill);
    return 0;
}
