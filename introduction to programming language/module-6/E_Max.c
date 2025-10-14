#include <stdio.h>

int main(){
   int n;
   int max=0;
   int x=0;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
    scanf("%d",&x);
    if(x>max){
        max=x;
       
    }
    
   }
   printf("%d",max);
    return 0;
}