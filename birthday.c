#include <stdio.h>
#include <string.h>
//function prototype
void birthday(char [],int);
int next(int);
int main(){
    char name[20];
    int age;

    fgets(name,sizeof(name),stdin);
    scanf("%d",&age); 
    int nextage = next(age);
    birthday(name,age);
    printf("\nnext year, you are %d years old.",nextage);
    return 0;
}

void birthday(char x[], int y){
    printf("\nhappy birthday dear %s",x);
    printf("\nYou are now %d years old",y);
}

int next(int x){
    return x+1; 
}