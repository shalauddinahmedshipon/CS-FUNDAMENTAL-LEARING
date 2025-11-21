#include<bits/stdc++.h>;
using namespace std;

int main(){

    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<n+1;i++){
        cin>>a[i];
    }

    int sum=10000001;
    for(int i=1;i<n+1;i++){
       for(int j=i+1;j<n+1;j++){
          int res=a[i]+a[j]+j-i;
          sum=min(sum,res);
       }
    }

    cout<<sum<<endl;
    }
   
   
    return 0;
}