#include <stdio.h>

int main(){
   int n;
   scanf("%d",&n);
   int ch=1;
   int sp=n-1;
   for(int x=1;x<=n;x++){
    for(int i=1;i<=sp;i++){
        printf(" ");
    }
    for(int i=1;i<=ch;i++){
        if(x%2==0){
       printf("-");
        }else{
       printf("#");
        }
       
    }
    printf("\n");
    ch+=2;
    sp--;
   }
   int n2=n-1;
   int sp2=1;
   int ch2=2*n2-1;
   for(int x=n2;x>0;x--){
    for(int i=1;i<=sp2;i++){
        printf(" ");
    }
    for(int i=1;i<=ch2;i++){
       if(x%2==0){
         printf("-");
        }else{
          printf("#");
        }
    }
     printf("\n");
    ch2-=2;
    sp2++;
   }
   
    return 0;
}