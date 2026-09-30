#include <stdio.h>
int main() {
    int i = 1;
    while(i != 0){
        printf("Enter a number (0 to exit): ");
        scanf("%d", &i);
        printf("Cube is: %d\n", i*i*i);
    }  
    return 0;
}
