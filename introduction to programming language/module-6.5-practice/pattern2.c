#include <stdio.h>

int main(){
   int n;
   scanf("%d",&n);
   for(int i=n;i>=1;i--){
     int nth =i;
    for(int i=nth;i>=1;i--){
        printf("%d ",i);
    }
    printf("\n");
   }
    return 0;
}