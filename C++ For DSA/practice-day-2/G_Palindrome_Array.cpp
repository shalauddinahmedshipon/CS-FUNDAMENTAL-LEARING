#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool isPali=true;
    for(int i=0;i<n;i++){
       int j=(n-1)-i;
       if(j>i){
        if(a[i]!=a[j]){
         isPali=false;
         break;
        }
       }
    }

    if(isPali){
        cout<<"YES"<<endl;
    }else{
         cout<<"NO"<<endl;
    }
    return 0;
}