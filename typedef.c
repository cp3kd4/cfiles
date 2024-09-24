#include <stdio.h>
#include <string.h>

// 1. typedef char user[25];
typedef struct 
{
    char name[25];
    char password[12];
    int id;
} User;

int main(){
    //typedef = reserved keyword that gives an existing datatype a "nickname"
    // 1. user user1[25] = "Bro";
    User user1 = {"Bro","password123", 123123123};
    User user2 = {"bruh","password443", 314134134};
    printf("%s\n",user1.name);
    printf("%s\n", user1.password);
    printf("%d\n",user1.id);
    printf("%s\n",user2.name);
    printf("%s\n", user2.password);
    printf("%d\n",user2.id);
    return 0;
}
