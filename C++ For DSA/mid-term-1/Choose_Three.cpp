#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
int n,sum;
    cin>>n>>sum;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
    bool isMatch=false;
    for(int i=0;i<n;i++){
     for(int j=i+1;j<n;j++){
         for(int k=j+1;k<n;k++){
              if(a[i]+a[j]+a[k]==sum){
                isMatch=true;
              }
           }
    }
    }

    if(isMatch){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    }
    
    return 0;
}