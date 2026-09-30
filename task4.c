#include <stdio.h>
int main() {
    int i = 1, c, marks;
    c = 0;
    while(i != 0 && i == 1){
        printf("Enter number (0 exit, 1 enter): ");
        scanf("%d", &i);
        printf("Enter marks: ");
        scanf("%d", &marks);
        printf("Marks entered: %d\n", marks);
        c += 1;
    }
    printf("total students: %d\n", c);  
    return 0;
}
