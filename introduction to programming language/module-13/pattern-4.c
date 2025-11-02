#include <stdio.h>

int main(){
int n;
scanf("%d",&n);
int star=2*n-1;
int space=0;
for(int i=1;i<=n;i++){
for(int i=1;i<=space;i++){
    printf(" ");
}
for(int j=star;j>=1;j--){
printf("*");
}
printf("\n");
star-=2;
space++;
}
    return 0;
}