#include <stdio.h>

long long int summation(long long int a[],long long int n,long long int idx,long long int sum){

if(idx<n){
    sum += a[idx];
   summation(a,n,idx+1,sum);
}
else{
 printf("%lld",sum);
return;
}






}
int main(){
   long long int n;
   scanf("%lld",&n);
   long long int a[n];
   for(long long int i=0;i<n;i++){
    scanf("%lld",&a[i]);
   }
  
   summation(a,n,0,0);
    return 0;
}