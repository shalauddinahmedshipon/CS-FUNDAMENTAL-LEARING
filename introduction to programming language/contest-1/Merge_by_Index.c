#include <stdio.h>
#include <string.h>

int main(){
   char s1[1001];
   char s2[1001];
   scanf("%s",&s1);
   scanf("%s",&s2);
   int f,l;
   scanf("%d %d",&f,&l);
   char s3[l-f+2];
    for(int i=f;i<=l;i++){
    if(s2[i]=='\0'){
        break;
    }
     s3[i-f]=s2[i];
   }
   strcat(s1,s3);
   printf("%s",s1);
    return 0;
}