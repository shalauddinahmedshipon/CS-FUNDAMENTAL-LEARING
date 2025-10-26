#include <stdio.h>
#include <string.h>

int main(){
   char strA[22];
   char strB[11];

   scanf("%s %s",&strA,&strB);
   int lenA =strlen(strA);
   int lenB =strlen(strB);
   int lenC =lenA+1;
   char strC[lenC];
   for(int i=0;i<lenC;i++){
    strC[i]=strA[i];
   }
//    printf("%d \n",strlen(strC));
   char strD[22];
   printf("%d %d\n",lenA,lenB);
   printf("%s\n",strcat(strA,strB));

   char temp=strC[0];
   strC[0]=strB[0];
   strB[0]=temp;

   printf("%s ",strC);
   printf("%s",strB);
//    printf("%d %d",strlen(strC),strlen(strB));

    return 0;
}