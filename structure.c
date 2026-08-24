#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Person
{
    char name[50];
    int citNo;
    float salary;
    /* data */
}P1;

int main(){

    strcpy (P1.name, "Shalabh");
    P1.citNo = 2006;
    P1.salary = 20000000000;

    printf("Name : %s \n CitizenShip : %d \n Salary : %f \n", P1.name, P1.citNo, P1.salary);


    return 0;
}

