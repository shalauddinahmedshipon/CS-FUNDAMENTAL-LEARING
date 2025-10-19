#include <stdio.h>

int main(){
   int t ;
   scanf("%d",&t);

for(int i=1;i<=t;i++){
   int n ;
   scanf("%d",&n);
   int a[n];
   for(int i=1;i<=n;i++){
    scanf("%d",&a[i]);
   }

   int min=10000000;

   for(int i=1;i<n;i++){

   for(int j=i+1;j<=n;j++){
   int temp =a[i]+a[j]+j-i;
    if(min>=temp ){
        min=temp;
    }  
   }
   
   }
   
   printf("%d\n",min);
}

  
   return 0;
}