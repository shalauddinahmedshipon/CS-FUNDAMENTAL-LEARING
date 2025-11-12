#include <stdio.h>

void rec(int n){
    if(n==0){
        return;
    }
int last = n%10;
rec(n/10);
printf("%d ",last);
}
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("%d",n);
    }
    rec(n);
    printf("\n");
    }
    
    return 0;
}