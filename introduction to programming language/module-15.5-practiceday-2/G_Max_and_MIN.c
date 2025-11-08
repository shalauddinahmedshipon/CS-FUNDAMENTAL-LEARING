#include <stdio.h>

int min(int arr[],int sz){
int mini=100001;
for(int i=0;i<sz;i++){
    if(arr[i]<=mini){
        mini=arr[i];
    }
}
return mini;
}

int max(int arr[],int sz){
int max=0;
for(int i=0;i<sz;i++){
    if(arr[i]>=max){
        max=arr[i];
    }
}
return max;
}

int main(){
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   int minimum = min(arr,n);
   int maximum =max(arr,n);
   printf("%d %d",minimum,maximum);

    return 0;
}