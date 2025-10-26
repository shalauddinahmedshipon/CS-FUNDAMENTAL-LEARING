#include <stdio.h>
#include <string.h>

int main(){
   int t;
   scanf("%d",&t);

   for(int i=1;i<=t;i++){
char s[10001];
   scanf("%s",&s);
   int sz = strlen(s);
   int countC=0;
   int countS=0;
   int countD=0;

   for(int i=0;i<sz;i++){
    if(s[i]>='A'&&s[i]<='Z'){
      countC++;
    }
    if(s[i]>='a'&&s[i]<='z'){
      countS++;
    }
    if(s[i]>='0'&&s[i]<='9'){
      countD++;
    }
   }

   printf("%d %d %d\n",countC,countS,countD);
    
   }
   
    return 0;
}