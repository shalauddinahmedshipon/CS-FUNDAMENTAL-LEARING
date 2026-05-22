#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n),prefix(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        prefix[i]=v[i];
    }

    for (int i = 1; i < n; i++)
    {
        prefix[i]+=prefix[i-1];
    }

    int cnt=0,sum=0;
    for (int i = n-1; i >0; i--)
    {
        // sum+=v[i];
        // for (int j = i+1; j < n; j++)
        // {
        //     sum+=v[j];
        //     if(sum==k){
        //         cnt++;
        //         sum=0;
        //         break;
        //     }
        // }
        sum+=prefix[i];
        if(sum==k){
            cnt++;
        }
        else if(sum>k){

        }
        else{
            
        }
        
        
    }
    
    cout<<cnt<<endl;
    return 0;
}