#include <stdio.h>

int main(){
int n;
scanf("%d",&n);
int star=n;
int space=0;
for(int i=1;i<=n;i++){
for(int i=1;i<=space;i++){
    printf(" ");
}
for(int j=1;j<=star;j++){
printf("*");
}
printf("\n");
star--;
space++;
}
    return 0;
}