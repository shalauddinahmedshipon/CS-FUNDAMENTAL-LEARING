#include <stdio.h>
#include <string.h>

int main(){
   char str[1001];
   scanf("%s",&str);
   
   char newStr[1001];
   int len =strlen(str);
   for(int i=len-1;i>=0;i--){
     newStr[(len-1)-i]=str[i];
   }

   for(int i=0;i<len;i++){
    if(str[i]!=newStr[i]){
       printf("NO");
       break;
    }
    if(i==len-1){
    if(str[i]==newStr[i]){
         printf("YES");
    }
    }
   
   }
   
  

    return 0;
}