#include <stdio.h>

int main(){
   int n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
     int nth =i+64;
    for(int i=65;i<=nth;i++){
        printf("%c ",nth);
    }
    printf("\n");
   }
    return 0;
}