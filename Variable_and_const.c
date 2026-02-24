/*
Variable :it is container to store the value, var can be changed
const = value cannot be changed
*/
#include <stdio.h>
#define year 2026
int main() {
    int salary=50000;
    salary=80000;
    const double Pi=3.14;
    printf("salary is %d",salary);

    int age =12;
    age =25;
    // Pi=2;
    // year=2025;
    printf("\nage is %d ",age);
    printf("\n AOC :%f",(Pi*5*5));
    printf("\nyear is %d",year);
}