#include <stdio.h>

int main(){
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   int sumPs=0;
   int sumNg=0;
   for(int i=0;i<n;i++){
   if(a[i]>=0){
    sumPs+=a[i];
   }else{
    sumNg+=a[i];
   }
  
   }

    printf("%d %d",sumPs,sumNg);
    return 0;
}