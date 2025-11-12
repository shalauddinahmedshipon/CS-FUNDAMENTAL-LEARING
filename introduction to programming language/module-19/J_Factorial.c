#include <stdio.h>

long long int rec(long long int n,long long int mul){
    if(n==0){
        return mul;
    }
    long long int res=rec(n-1,mul);
    return n*res;
    
}
int main(){
   long long int n;
   scanf("%lld",&n);
   long long int res =rec(n,1);
    printf("%lld",res);
    return 0;
}