#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s; cin>>n>>s;
        if(n>s){
            cout<<"No"<<endl;
            continue;
        }
        vector<int> v(n,1);
        if(n%2==1){
           int extra=s-n;
           v.back()+=extra;
        }
        else{
            if(s%2==1){
                cout<<"No"<<endl;
                continue;
            }
            else{
                int extra=s-n;
                v[0]+=extra/2;
                v[1]+=extra/2;
            }
        }
        cout<<"Yes"<<endl;
        for(auto x:v){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}