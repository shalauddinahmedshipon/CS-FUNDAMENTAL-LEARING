#include <stdio.h>
#include <stdio.h>

int main(){
   char str[100001];
   scanf("%s",&str);
   int len=strlen(str);
   for(int i=0;i<len;i++){
    if(str[i]==','){
        printf(" ");
        continue;
    }
    if(str[i]>=65 && str[i]<=90){
          printf("%c",str[i]+32);
          continue;
    }
    else{
        printf("%c",str[i]-32); 
    }

   }

    return 0;
}