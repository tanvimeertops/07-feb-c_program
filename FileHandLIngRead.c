#include <stdio.h> // stdio :standard input output
/*
File : to store permanently
    file pointer
    to open file
    write into the file
    file close
    close
*/
int main() {
        FILE *fp;
        char ch;
        //to open file and also write
        fp=fopen("dummy.txt","r");
        while((ch=fgetc(fp)) != EOF)
        {
            printf("%c",ch);
        }
        fclose(fp);
                                
                                }
