#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> arr(n);
       
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        sort(arr.begin(),arr.end());

        int cnt=0;
        
        if(n>2){
            int mn=arr[0],mx=arr[n-1];
            for(int i=0;i<n;i++){
                if(arr[i]!=mn&&arr[i]!=mx) cnt++;
            }
        }

        cout<<cnt<<endl;
        


    }
    
    return 0;
}