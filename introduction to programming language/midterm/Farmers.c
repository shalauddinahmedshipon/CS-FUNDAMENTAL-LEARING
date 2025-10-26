#include <stdio.h>

int main(){
   int t ;
   scanf("%d",&t);

   for(int i=1;i<=t;i++){
   int M1, M2, D1;
   scanf("%d %d %d",&M1,&M2,&D1);

   int D2 =(D1*M1)/(M1+M2);
   int res = D1-D2;
   printf("%d \n",res);
   }

    return 0;
}