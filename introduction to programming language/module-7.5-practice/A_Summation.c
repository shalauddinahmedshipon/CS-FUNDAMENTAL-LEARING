#include <stdio.h>
#include <math.h>

int main(){
   int n;
   scanf("%d",&n);
     int a[n];
     int sum=0;
   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum=sum+a[i];
 
   }
   printf("%d ",abs(sum));

    return 0;
}