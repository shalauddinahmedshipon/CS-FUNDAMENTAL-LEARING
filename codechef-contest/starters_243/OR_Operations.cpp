#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        int  target= 0,cnt=0;
        for(int x:v){
            target=target|x;
        }

        
        for (int i = 0; i < n; i++)
        {
            if(v[i]!=target){
                if(i+1<n) v[i+1]=v[i]|v[i+1];
                cnt++;
            }
        }
        
        cout<<cnt<<endl;
    }
    return 0;
}