#include <stdio.h>
int main() {
    int marks[5];
    int highest = 0, lowest = 100;
    float total = 0;
    float avg;
    for (int i = 0; i < 5; i++){
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
        if (marks[i] > highest){
            highest = marks[i];
        }
        if (marks[i] < lowest){
            lowest = marks[i];
        }
    }
    avg = total / 5;
    printf("Highest marks: %d\n", highest);
    printf("Lowest marks: %d\n", lowest);
    printf("Average marks: %.2f\n", avg);
    printf("Total marks: %.2f\n", total);
    return 0;
}
