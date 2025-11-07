#include <stdio.h>

int main(){
   int n;
   scanf("%d",&n);
   int star1=1;
   int space1=n-1;
   //first piramid
   for(int i=1;i<=n;i++){
   for(int k=1;k<=space1;k++){
    printf(" ");
   }
   for(int j=1;j<=star1;j++){
    printf("*");
   }
   printf("\n");
   star1+=2;
   space1--;
   }
   //second piramid
   int star2=star1-2;
   int space2=0;
   for(int i=1;i<=n;i++){
   for(int k=1;k<=space2;k++){
    printf(" ");
   }
   for(int j=1;j<=star2;j++){
    printf("*");
   }
   printf("\n");
   star2-=2;
   space2++;
   }
    return 0;
}