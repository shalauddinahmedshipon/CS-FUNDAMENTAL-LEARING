#include <stdio.h>

int main(){
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=1;i<=n;i++){
    scanf("%d",&a[i]);
   }

    int min= a[1];
    int pos=1;
    for(int i=1;i<=n;i++){
        if(min<=a[i]){
         continue;
        }else{
            min=a[i];
            pos=i;
        }
    }

    printf("%d %d",min,pos);

    return 0;
}