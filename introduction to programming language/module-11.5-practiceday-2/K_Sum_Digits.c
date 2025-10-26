#include <stdio.h>

int main(){
   int n;
   scanf("%d",&n);

   char arr[n];

    scanf("%s",&arr);

    // printf("%s\n",arr);
    int sum =0;
    for(int i=0;i<n;i++){
        int val =arr[i]-48;
        sum+=val;
        // printf("%d ",);
    }

    printf("%d",sum);

    return 0;
}