#include <stdio.h>

void print_num(int n){
    for(int i=1; i<=n;i++){
        printf("%d",i);
        if(i==n){
            break;
        }
        printf(" ");
    }
}
int main(){
   int n;
   scanf("%d",&n);
   print_num(n);

    return 0;
}