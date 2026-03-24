#include <stdio.h> // stdio :standard input output
#include<stdlib.h>
int main() {
   int *arr;
   int n;
   printf("enter the sizw");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    printf("enter value :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("you entered :");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

    free(arr);
    return 0;
}