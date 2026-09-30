#include <stdio.h>
int main() {
    int temp, totaltemp=0, count=0;
    int i = 1;
    
    while(i<= 7){
        printf("Enter the temperature for the day: ");
        scanf("%d", &temp);
        if(temp > 100){
            count += 1;
        }
        totaltemp += temp;
        i++;
    } 
    printf("Number of days with temperature > 100: %d\n", count);
    printf("Total temperature: %d\n", totaltemp);
    return 0;
}
