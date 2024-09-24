#include <stdio.h>
#include <stdbool.h>
int main(){
    int guess;
    bool sunny = true;
    while (scanf("%d",&guess) != EOF)
    {
        if (guess == 42)
        {
            printf("nice\n");
            break;
        }
        else if(guess < 42){
            printf("higher\n");
        }
        else
            printf("lower\n");
        if (sunny)
        {
            printf("haha\n");
        }
        
            
        
    }
    
    return 0;
}