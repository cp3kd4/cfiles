#include <stdio.h>
#include <string.h>
enum Day{Sun = 7,Mon = 1,Tue = 2,Wed = 3,Thu = 4,Fri = 5,Sat = 6 };
int main(){
    enum Day today = Wed;
    if (today == 6 || today == 7)
    {
        printf("it's weekend!\n");
    }
    else printf("it's a bad day\n");
    
    return 0;
}
