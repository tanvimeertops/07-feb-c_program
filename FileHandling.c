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
            //to open file and also write
                fp=fopen("dummy.txt","a");
                    //to write into the file
                        fprintf(fp,"Hello class 07 feb");
                            fclose(fp);
                                
                                }
