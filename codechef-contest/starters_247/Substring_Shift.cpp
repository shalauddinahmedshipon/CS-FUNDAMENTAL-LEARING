#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t; cin>>t;
    while (t--)
    {
        ll n; cin>>n;
        string s; cin>>s;
        vector<ll> idxZ;
        
        for (ll i = 0; i < n; i++)
        {
            if(s[i]=='z'){
                idxZ.push_back(i);
            }
        }

        if(idxZ.empty()){
            cout<<s<<endl;
        }
        else if(idxZ.size()==1&&s[idxZ[0]]=='z'){
            cout<<"a"<<endl;
        }
        else{      

        // for(auto i:idxZ) cout<<i<<" ";
        // cout<<endl;
        
        for (ll i = 0; i<idxZ.size()-1; i++)
        {
            if(idxZ[i+1]-idxZ[i]!=1){
                s[idxZ[i]]='a';
                break;
            }
            else{
                s[idxZ[i]]='a';
                s[idxZ[i+1]]='a';
                
            }
        }
        

        cout<<s<<endl;


        }

        
        
        
    }
    
    return 0;
}