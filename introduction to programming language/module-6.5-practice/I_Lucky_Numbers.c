#include <stdio.h>

int main(){
    int a ;
    scanf("%d",&a);
    int firstNum= a/10;
    int lastNum=a%10;
    if(firstNum ==0 && lastNum!=0){
        if(firstNum%lastNum==0){
             printf("YES");
        }else{
         printf("NO"); 
        }  
    }
    else if(firstNum !=0 && lastNum ==0){
       if(lastNum%firstNum==0){
             printf("YES");
        }else{
         printf("NO"); 
        }  
    }
    else if(firstNum%lastNum==0||lastNum%firstNum==0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}