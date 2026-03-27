#include<bits/stdc++.h>;
using namespace std;

int main(){
    long long int n,q;
    cin>>n>>q;
    long long int arr[n+1];
    long long int prefix[n+1];
    for (long long int i = 1; i <= n; i++)
    {
        long long int x;
        cin>>x;
        arr[i]=x;
    }
    prefix[1]=arr[1];

    for (long long int i = 2; i <= n; i++)
    {
       prefix[i]=prefix[i-1]+arr[i];
    }
    
   
    while (q--)
    {
       long long int sum=0;
       long long int l,r;
       cin>>l>>r;
       if(l==1){
        sum=prefix[r];
       }else{
         sum=prefix[r]-prefix[l-1];
       }
      

       cout<<sum<<endl;
       
    }
    
    
    return 0;
}