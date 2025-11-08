#include <stdio.h>

int sum(int a,int b){
return a+b;
}
int main(){
   int a,b;
   scanf("%d %d",&a,&b);
   int res = sum(a,b);
   printf("%d",res);
    return 0;
}