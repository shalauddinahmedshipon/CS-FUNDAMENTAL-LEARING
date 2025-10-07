#include <stdio.h>;
// Take a number from user and check if its a even number or odd number.

int main(){
   int n;
   scanf("%d",&n);

   if(n%2==0){
    printf("Even Number");
   }else{
    printf("Odd Number");
   }
    return 0;
}