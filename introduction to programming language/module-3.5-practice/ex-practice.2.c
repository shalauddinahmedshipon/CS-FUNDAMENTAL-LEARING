#include <stdio.h>

int main(){
    for(int i=100;i>0;i=i-1){
    if(i%2==1){
      printf("%d\n",i);
    }
    }
    return 0;
}