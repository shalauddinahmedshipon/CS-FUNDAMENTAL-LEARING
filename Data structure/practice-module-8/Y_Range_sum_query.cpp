#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    long long int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
    }
    long long int pre[n];
    pre[1]=arr[1];
    
    for (int i = 2; i <= n; i++)
    {
       pre[i]=pre[i-1]+arr[i];
    }
    for (int i = 1; i <= q; i++)
    {
        int l,r;
        cin>>l>>r;
        if(l==1){
           long long int res=pre[r];
            cout<<res<<endl;
        }else{
        long long int res=pre[r]-pre[l-1];
        cout<<res<<endl;
        }

    }
    
    return 0;
}