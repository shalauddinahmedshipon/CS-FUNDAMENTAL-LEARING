#include <stdio.h>

int main(){
   int n;
   scanf("%d",&n);
   int sp=n-1;
   int val=1;
   for(int i=1;i<=n;i++){
    for(int j=1;j<=sp;j++){
        printf(" ");
    }
    for(int k=val;k>=1;k--){
       printf("%d",k);
    }
    printf("\n");
    sp--;
    val++;
   }
    return 0;
}