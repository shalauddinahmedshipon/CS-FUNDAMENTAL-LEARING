#include <stdio.h> ;
// Take a number from user and check if its a positive or negative number.

int main(){
    int n;
    scanf("%d",&n);
    if(n < 0){
        printf("negative number");
    }
    else{
        printf("positive number");
    }
    return 0;
}