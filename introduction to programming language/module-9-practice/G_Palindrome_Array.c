#include <stdio.h>

int main(){
   int n ;
   scanf("%d",&n);
   int a[n];

   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
   }

   int i=0;
   int j=n-1;

   while (i<j)
   { 
    if(a[i]!=a[j]){
       printf("NO");
       break;
    }
    
    if(i==j-1||i==j-2){
    printf("YES");
    }

    i++;
    j--;
   }

   return 0;
}