#include <stdio.h>

int main(){
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
   int min, max;
   if(a<=b & a<=c){
    min = a;
   }
   if(b<=a&& b<=c){
    min=b;
   }
   if(c<=a && c<=b){
    min=c;
   }
   if(a>=b&&a>=c){
    max=a;
   }
   if(b>=a&&b>=c){
    max=b;
   }
   if(c>=b&&c>=a){
    max=c;
   }
   printf("%d %d",min,max);
    return 0;

}