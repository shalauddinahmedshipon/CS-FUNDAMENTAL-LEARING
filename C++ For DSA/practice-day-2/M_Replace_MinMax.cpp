#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=-100001;
    int minIdx;
    int maxIdx;
    int min=100001;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
            minIdx=i;
        }
        if(arr[i]>max){
            max=arr[i];
            maxIdx=i;
        }
    }

    arr[minIdx]=max;
    arr[maxIdx]=min;

    // cout<<max<<" "<<min<<" "<<maxIdx<<" "<<minIdx<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}