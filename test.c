#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    double price1 = 12.99;
    char name[25];
    double r;
    double pi = 3.14;
    double area;
    printf("radius = ");
    scanf("%lf",&r);
    area = pi * r*r;
    printf("area = %lf",area);
    /*printf("is $%.3f\n",price);
    fgets(name,25,stdin);
    name[strlen(name)-1] = '\0';
    scanf("%lf", &price1);
    printf("output %.2lf\n",price1);
    printf("hello %s, haha",name);
    */

    return 0;
}