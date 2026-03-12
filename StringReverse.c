#include <stdio.h> // stdio :standard input output
#include <string.h>
int main() {
   char str[]="hello ";
   char str2[]="World";
//    strrev(str);
//    printf("%s",str);

   strcat(str,str2);
   printf("%s",str);

    return 0;
}