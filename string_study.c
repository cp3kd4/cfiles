#include <stdio.h>
#include <string.h>

int main(){
    char str1[] = "Jimmy"; 
    char str2[] = "Yang";
    strlwr(str1); //convert to lower case
    printf("\n%s",str1);

    strupr(str2); //convert to upper case
    printf("\n%s",str2);

    strcat(str1,str2); // appends str2 to the end of str1
    printf("\n%s",str1);

    strncat(str1,str2,1); // appends n character from str2 to str1
    printf("\n%s",str1);

    strcpy(str1,str2); // copy str2 to str1
    printf("\n%s",str1);

    strncpy(str1,str2,4); //copy n characters of str2 to str1
    printf("\n%s",str1);
    return 0;

}