#include <stdio.h>

int main(){
   int n,m;
   scanf("%d %d",&n,&m);
   int arr[n];

   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }

   int frq[100000]={0};

   for(int i=0;i<n;i++){
    frq[arr[i]]++;
    
   }

   for(int i=1;i<=m;i++){
    printf("%d\n",frq[i]);
   }

    return 0;
}