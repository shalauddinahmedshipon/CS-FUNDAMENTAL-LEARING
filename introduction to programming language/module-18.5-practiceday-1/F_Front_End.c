#include <stdio.h>

int main(){
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
//    int f=0;
//    int l=n-1;
//    while (f<l+1)
//    {
//      printf("%d ",a[f]);
//    printf("%d ",a[l]);
//    f++;
//    l--;
//    }
   
   for(int i=0,j=n-1;i<=j;i++,j--){
  
   printf("%d ",a[i]);
   if(i==j){
    break;
   }
   printf("%d ",a[j]);
  
   }
    return 0;
}