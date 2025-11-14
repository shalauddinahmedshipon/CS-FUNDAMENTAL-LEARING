#include <stdio.h>

int main(){
   int n;
   scanf("%d",&n);
   int lineCount =0;
   for(int i=1;i<=n+10;i=i+2){
    lineCount++;
   }
   int star=1;
   int space=lineCount-1;
   for(int i=1;i<=lineCount;i++){
    for(int j=1;j<=space;j++){
     printf(" ");
    }
    for(int k=1;k<=star;k++){
     printf("*");
    }
    space--;
    star=star+2;
    printf("\n");
   }
   for(int i=1;i<=5;i++){
    for(int k=1;k<=5;k++){
        printf(" ");
    }
    for(int j=1;j<=n;j++){
        printf("*");
    }
    printf("\n");
   }
    return 0;
}