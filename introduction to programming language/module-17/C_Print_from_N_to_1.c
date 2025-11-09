#include <stdio.h>

void print_recursion(int count,int n){

if(count+1==n){
    return;
}
print_recursion(count,n+1);
printf("%d",n);
if(n!=1){
    printf(" ");
}
}

int main(){
   int count;
   scanf("%d",&count);
   print_recursion(count,1);

    return 0;
}