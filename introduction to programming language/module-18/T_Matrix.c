#include <stdio.h>

int main(){
   int n;
   scanf("%d",&n);
   int a[n][n];
   for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
        scanf("%d",&a[i][j]);
     }
   }

//    for(int i=0;i<n;i++){
//      for(int j=0;j<n;j++){
//         printf("%d ",a[i][j]);
//      }
//      printf("\n");
//    }
   int sum_of_pri_diag=0;
   int sum_of_secondary_diag=0;
    for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
        // printf("%d ",a[i][j]);
        if(i==j){
            sum_of_pri_diag+=a[i][j];
        }
        if(i+j==n-1){
            sum_of_secondary_diag+=a[i][j];
        }
     }
    }

    int abs_sum=sum_of_pri_diag - sum_of_secondary_diag;
  
    if(abs_sum<0){
        int res =(-1)*(abs_sum);
      printf("%d",res);
    }else{
      printf("%d",abs_sum);  
    }

    return 0;
}