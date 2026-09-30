#include <stdio.h>
int main() {
    int i = 1;
    while(i != 0){
        printf("Enter a number (0 to exit): ");
        scanf("%d", &i);
        printf("You entered: %d\n", i);
    }  
    return 0;
}
