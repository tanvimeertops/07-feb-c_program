#include <stdio.h> // stdio :standard input output
/*
if : if cond is true :true statement print else nothing
if else :if cond is true :true statement else false statement
print
*/
int main() {
   int age=12;
   if(age>=18){
    printf("\nYou can Vote!!!\n");
   }

   int num1=12;
   if(num1>0){
    printf("No is Positive\n");
   }

   /*
   if else:
   if condition is true true statement print else false statement print
   
   */

   int no1=13;
   if(no1%2==0){
    printf("even no");
   }else{
    printf("odd no");
   }

   int marks=49;

   if(marks>=33){
    printf("\nPass\n");
   }else{
    printf("Fail\n");
   }




    return 0;
}