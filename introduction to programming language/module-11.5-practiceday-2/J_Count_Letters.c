#include <stdio.h>
#include <string.h>

int main(){
   char str[10000001];
   scanf("%s",&str);

   int val[26]={0};
   int sz=strlen(str);
   for(int i=0;i<sz;i++){
    int num = str[i]-97;
    val[num]++;
   }

  for(int i=0; i<26;i++){
    if(val[i]>0){
      printf("%c : %d\n",i+97,val[i]);
    }
  
  }
   return 0;
}