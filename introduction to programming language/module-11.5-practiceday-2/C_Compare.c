#include <stdio.h>

int main(){
   char strX[21];
   char strY[21];
   scanf("%s %s",&strX,&strY);

   
   int i =0;
   while (1)
   {
   if(strX[i]=='\0'&&strY[i]){
     printf("%s",strX);
     break;
   }
   if(strX=='\0'){
    printf("%s",strX);
     break;

   }
   if(strY=='\0'){
    printf("%s",strY);
     break;

   }
   if(strX[i]==strY[i]){
    i++;
   }
   if(strX[i]<strY[i]){
     printf("%s",strX);
     break;

   }
   if(strX[i]>strY[i]){
     printf("%s",strY);
     break;

   }
   }
   
   return 0;
}