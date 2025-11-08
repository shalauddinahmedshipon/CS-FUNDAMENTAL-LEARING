#include <stdio.h>

char small_to_capital(char ch){
int val=ch-32;
char cap= val;
return cap;
}
int main(){
   char ch;
   scanf("%c",&ch);
   char val=small_to_capital(ch);
   printf("%c",val);
    return 0;
}