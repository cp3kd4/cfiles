#include <stdio.h>

int main(){
    //while == check condition first, then execute
    //do while == always execute once, then check condition
    int number, sum = 0;
    do{
        printf("\nenter a number above 0");
        scanf("%d", &number);
        if (number >0)
        {
            sum += number;
        }
        
    } while (number > 0);
    printf("%d",sum);
    return 0;
}