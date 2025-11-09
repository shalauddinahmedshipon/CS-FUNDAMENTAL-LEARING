#include <stdio.h>

void print_recursion(int count,int n){
printf("I love Recursion\n");
if(count==n){
    return;
}
print_recursion(count,n+1);
}

int main(){
   int count;
   scanf("%d",&count);
   print_recursion(count,1);

    return 0;
}