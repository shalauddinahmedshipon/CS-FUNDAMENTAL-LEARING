#include <stdio.h>

int main(){

  int t;
  scanf("%d",&t);
  for(int i=1;i<=t;i++){
 int n;
   scanf("%d",&n);
   int a[n];
   for (int i = 0; i < n; i++)
   {
    scanf("%d",&a[i]);
   }

   int c[n];
   for (int i = 0; i < n; i++)
   {
    c[i]=a[i];
   }

   for (int i = 0; i < n-1; i++)
   {
    for (int j = i+1; j < n; j++)
    {
        if(c[i]>c[j]){
            int temp = c[i];
            c[i]=c[j];
            c[j]=temp;
        }
    }
  
   }


   int b[n]; 
   for (int i = 0; i < n; i++)
   {
    int j=a[i]-c[i];
    if(j<0){
      b[i]=(-1)*j; 
    }else{
    b[i]=j;
    }  
   }

   for (int i = 0; i < n; i++)
   {
   printf("%d ",b[i]);
   }
   printf("\n");
  }

  
   
   
    return 0;
}