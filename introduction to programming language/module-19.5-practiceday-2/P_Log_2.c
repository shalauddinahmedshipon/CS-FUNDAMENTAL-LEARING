#include <stdio.h>

int rec(long long int n,int ans){
if(n==1){
    printf("%d",ans);
    return;
}
ans++;
rec(n/2,ans);
}

int main(){
   long long int n;
   scanf("%lld",&n);
   if(n==1){
    printf("0");
   }
   else{
 rec(n,0);
   }
  

    return 0;
}