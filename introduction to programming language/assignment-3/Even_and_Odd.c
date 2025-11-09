#include <stdio.h>
void odd_even(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int eventCount=0;
    int oddCount=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            eventCount++;
        }else{
            oddCount++;
        }
    }
    printf("%d %d",eventCount,oddCount);
}
int main(){
  odd_even(); 
    return 0;
}