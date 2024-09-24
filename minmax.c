#include <stdio.h>
int main(){
    int first = 1;
    int val, min, max;
     while(scanf("%d",&val) != EOF){
        if (first || val > max) max = val;
        if (first || val < min) min = val;
        first = 0;
     }
    printf("max is %d \n",max);
    printf("min is %d \n",min);
    return 0;
}