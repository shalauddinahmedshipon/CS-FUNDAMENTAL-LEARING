#include <stdio.h>

int main(){
int n;
scanf("%d",&n);
int star=1;
// int space=n-1;
for(int i=1;i<=n;i++){
// for(int i=1;i<=space;i++){
//     printf(" ");
// }
char ch='A';
for(int j=1;j<=star;j++){
printf("%c ",ch+j-1);
}
printf("\n");
star++;
// space--;
}
    return 0;
}