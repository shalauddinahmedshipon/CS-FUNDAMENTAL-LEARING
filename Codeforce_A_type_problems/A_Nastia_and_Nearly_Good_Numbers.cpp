#include<bits/stdc++.h>;
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while (t--)
    {
        long long int a,b;
        cin>>a>>b;
        if(b==1){
            cout<<"NO"<<endl;
        }
        else if(b==2){
            cout<<"YES"<<endl;
            if(a==1){
                cout<<3<<" "<<1<<" "<<4<<endl;
            }
            else{
                b*=a;
                long long int z=a*b;
                long long int y=z-a;
                cout<<a<<" "<<y<<" "<<z<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
            cout<<a<<" "<<a*(b-1)<<" "<<a*b<<endl;
        }
    }
    
    return 0;
}