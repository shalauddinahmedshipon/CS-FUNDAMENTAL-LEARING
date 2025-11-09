#include <stdio.h>

void print_recursion(int a[],int sz,int idx){
if(sz==idx){
    return;
}
print_recursion(a,sz,idx+1);
if(idx%2==0){
printf("%d ",a[idx]);
}

}

int main(){
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++){
    scanf("%d",&a[i]); 
   }
   print_recursion(a,n,0);

    return 0;
}