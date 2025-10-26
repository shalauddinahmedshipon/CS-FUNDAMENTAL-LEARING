#include <stdio.h>
#include <string.h>

int main(){
   int t;
   scanf("%d",&t);

   for(int i=1;i<=t;i++){

   char A[51],B[51];
   scanf("%s %s",&A,&B);

   int lenA=strlen(A);
   int lenB=strlen(B);

   int minL = lenA<lenB? lenA:lenB;

   for(int i=0;i<minL;i++){
    printf("%c%c",A[i],B[i]);
   }

   if(lenA<lenB){
    for(int i=lenA;i<lenB;i++){
        printf("%c",B[i]);
    }
   }
   if(lenA>lenB){
    for(int i=lenB;i<lenA;i++){
        printf("%c",A[i]);
    }
   }


   printf("\n");
   }




    return 0;
}