#include <stdio.h>
int main() {
    int marks, count=0;
    float avg, totalmarks = 0;
    printf("Enter marks (-1 to stop): ");
    scanf("%d", & marks);
    do{
        if(marks >= 0 && marks <= 100){
            totalmarks += marks;
            count++;
        } else{
            printf("Invalid marks\n");
        }
        
        printf("Enter marks (-1 to stop): ");
        scanf("%d", & marks);
    }while(marks != -1);
    avg = totalmarks / count;
    printf("Total marks: %.2f\n", totalmarks);
    printf("Number of students: %d\n", count);
    printf("Average marks: %.2f\n", avg);
    return 0;
}
