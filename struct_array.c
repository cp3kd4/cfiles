#include <stdio.h>
#include <string.h>
struct Student
{
    char name[12];
    float gpa;
};

int main(){
    struct Student student1 = {"andy",3.5};
    struct Student student2 = {"bob",4.3};
    struct Student student3 = {"karen",1.2};
    struct Student students[] = {student1,student2,student3};
    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        printf("%s's gpa is %.2f\n",students[i].name,students[i].gpa);
    }
    
    
    return 0;
}