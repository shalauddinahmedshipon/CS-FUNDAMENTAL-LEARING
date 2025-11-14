#include <stdio.h>

int main(){
   int r,c;
   scanf("%d %d",&r,&c);
   if(r!=c){
    printf("NO");
   }else{
 int a[r][c];
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&a[i][j]);
    }
   }
   int isJadu=1;
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
       if(i==j){
        if(a[i][j]!=1){
            isJadu=0;
            break;
        }   
       }
       else if(i+j==c-1){
        if(a[i][j]!=1){
            isJadu=0;
            break;
        }
       }
       else
       {
         if(a[i][j]!=0){
            isJadu=0;
         }
       }
       
    }  
   }


    if(isJadu==1){
        printf("YES");
    }else{
        printf("NO");
    }
   }
  
   return 0;
}