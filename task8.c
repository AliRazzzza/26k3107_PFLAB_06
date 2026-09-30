#include <stdio.h>
int main() {
    int salary, index;
    int salaries[6];
    int i, c= 0;
    for (i = 0; i < 6; i++) {
        printf("\nEnter salary for employee %d: ", i + 1);
        scanf("%d", &salaries[i]);
        if (salaries[i] > 50000){
            c += 1;
        }

    }
    index = 0;  
    for(index = 0; index < 6; index++){
        printf("Salaries are: %d\n", salaries[index]);

    }
    printf("Salary greater than 50000: %d", c);

    return 0;
}
