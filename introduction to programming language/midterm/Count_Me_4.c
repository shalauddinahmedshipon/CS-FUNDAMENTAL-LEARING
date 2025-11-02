#include <stdio.h>

int main(){
   char s[10001];
   scanf("%s",&s);
   int sz = strlen(s);
   int count[26]={0};
   for(int i=0;i<sz;i++){
    count[s[i]-97]++; 
   }

   for(int i=0;i<26;i++){
    if(count[i]>0){
        printf("%c - %d\n",i+97,count[i]);
    }
   }
    return 0;
}