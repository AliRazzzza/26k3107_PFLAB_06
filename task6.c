#include <stdio.h>
int main() {
    int i= 1, savedamt, totalamt = 0, numdep= 0;
    while(savedamt > 0){
        printf("Do you want to enter amount? (0 or less to exit): ");
        scanf("%d", &savedamt);
        if (savedamt > 0){
            totalamt += savedamt;
            numdep++;
        }    

    }
    printf("Total amount saved: %d\n", totalamt);
    printf("Number of deposits: %d\n", numdep);

    return 0;
}
