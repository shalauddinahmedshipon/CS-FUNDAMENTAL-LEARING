#include<bits/stdc++.h>;
using namespace std;

int main(){
    string a;
    cin>>a;
    string b;
    b=a;
    reverse(a.begin(),a.end());
    if(b==a){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}