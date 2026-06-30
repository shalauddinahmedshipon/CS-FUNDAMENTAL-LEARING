#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        if(y>x){
            cout<<"NO"<<endl;
        }else{
            if(x%y==0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    
    return 0;
}