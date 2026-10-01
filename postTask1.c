#include <stdio.h>
int main() {
    int withdrawl, balance = 50000, count = 0;
    printf("Enter the amount to withdraw: ");
    scanf("%d", &withdrawl);
    do{
        if(withdrawl <= balance){
            balance -= withdrawl;
            count++;
            
        } else {
            printf("Insufficient funds\n");
        }
        printf("Enter the amount to withdraw: ");
        scanf("%d", &withdrawl);
    }while(withdrawl > 0);
    printf("Total withdrawals: %d\n", count);
    printf("Remaining balance: %d\n", balance);
    return 0;
}
