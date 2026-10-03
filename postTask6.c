#include <stdio.h>
int main() {
    int pin;
    int attempt = 0;
    while (attempt < 3) {
        printf("Enter your PIN: ");
        scanf("%d", &pin);
        if (pin == 1234) {
            printf("Login successful\n");
            return 0;
        } else{
            printf("Incorrect PIN\n");
            attempt++;
        }
    }
    printf("Account locked\n");
    return 0;
}
