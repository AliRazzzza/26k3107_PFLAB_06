#include <stdio.h>
int main() {
    int balance, total = 0, c = 0;
    printf("Enter amount to be recharged (0 or less to end): ");
    scanf("%d", &balance);
    do{
       total += balance;
       c++;
       printf("Enter amount to be recharged (0 or less to end): ");
       scanf("%d", &balance); 
       if(total >= 5000){
           printf("Maximum recharge amount reached\n");
              break;
       }
    }while(balance > 0);
    printf("Total recharge attempts: %d\n", c);
    printf("Total recharge amount: %d\n", total);

    return 0;
}
