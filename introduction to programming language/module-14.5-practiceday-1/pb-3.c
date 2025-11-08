#include <stdio.h>

int char_to_ascii(char ch){
int val=ch;
return val;
}
int main(){
   char ch;
   scanf("%c",&ch);
   int val=char_to_ascii(ch);
   printf("%d",val);
    return 0;
}