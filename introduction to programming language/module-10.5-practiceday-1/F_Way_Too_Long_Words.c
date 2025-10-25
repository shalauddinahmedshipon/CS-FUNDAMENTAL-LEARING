#include <stdio.h>
#include <string.h>

int main(){
   int t;
   scanf("%d",&t);
   for(int i=1;i<=t;i++){
   char str[101];
   scanf("%s",&str);
   if(strlen(str)>10){

    for(int i=0;i<strlen(str);i++){

        if(i==0){
            printf("%c",str[i]);
        }
        else if(i==strlen(str)-1){
            printf("%c",str[i]);
        }else if(i==strlen(str)-2){
           printf("%d",i);
        }
    }
  
}else{
    printf("%s",str);
   }
    printf("\n");
   }
 
   return 0;
}