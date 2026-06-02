#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        if(k==1&&(n==0)) {
            cout<<"On"<<endl;
        }
        else if (k==1&&(n!=0)) {
            cout<<"Ambiguous"<<endl;
        }
        else if(k==0) {
            if(n==0||n%4==0){
                 cout<<"Off"<<endl;
            }
            else if(n%4!=0) {
                cout<<"On"<<endl;
            }
            
        }
       
    }
    
    return 0;
}