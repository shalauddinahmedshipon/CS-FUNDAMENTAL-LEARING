#include <stdio.h>

int rec(int a[],int idx,int n,int max){
if(idx==n-1){
    printf("%d",max);
    return;
}
if(a[idx]>=max){
max=a[idx];
}
rec(a,idx+1,n,max);
}

int main(){
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
   }

   rec(a,0,n,a[0]);
//    for(int i=0;i<n;i++){
//     printf("%d ",a[i]);
//    }
    return 0;
}