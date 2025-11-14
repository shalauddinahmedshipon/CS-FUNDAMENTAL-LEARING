#include <stdio.h>

int main(){
   int t;
   scanf("%d",&t);
   for(int i=1;i<=t;i++){
   long long int r;
   scanf("%lld",&r);
   long long int a,b,c;
   scanf("%lld %lld %lld",&a,&b,&c);
   long long int d=r/(a*b*c);
   if(a*b*c*d==r){
    printf("%lld\n",d);
   }else{
    printf("-1\n");
   }
   }
  
    return 0;
}