#include <stdio.h> 
#include <string.h>// stdio :standard input output
int main() {
//    char name[] = "tops";
//    printf("\n%s\n",name);

//     char str[4]={'H','E','L','\0'};
//     printf("\n%s\n",str);

char username[20];
char actual_username[]="admin";
 
// printf("enter username :");
// scanf("%s",username);
// if(strcmp(actual_username,username)==0){
//     printf("Correct Username");
// }else{
//     printf("Wrong Username");
// }
// printf("length for actual username :%lu",strlen(actual_username));

char str1[]="tops";
char str2[20];

// strcpy(str2,str1);
// printf("%s",str2);

strrev(str1);
printf("%s",str1);
    return 0;
}