#include <stdio.h>

int main(){
   int arr[5][5];
   int move=0;
   for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        scanf("%d",&arr[i][j]);
    }
   }
   for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        // printf("%d ",arr[i][j]);
        if(arr[i][j]==1){
     if(i<2){
        move=2-i;
     }else{
        move=i-2;
     }
     if(j<2){
        move+=2-j;
     }else{
        move+=j-2;
     }
        }
    }
   
   }
    printf("%d",move);
    return 0;
}