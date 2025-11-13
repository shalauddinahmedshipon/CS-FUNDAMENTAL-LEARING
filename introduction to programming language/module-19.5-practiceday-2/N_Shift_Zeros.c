#include <stdio.h>

void swipe(int a[],int n){
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]==0){
            int temp = a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
   }

   for(int i=0;i<n;i++){
    printf("%d ",a[i]);
   }
}

int main(){
   int n;
   scanf("%d",&n);
   int a[n];
  
   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
    swipe(a,n);
   
    return 0;
}