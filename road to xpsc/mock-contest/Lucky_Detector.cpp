#include<bits/stdc++.h>;
using namespace std;

int main(){
    string s;
    cin>>s;
    bool flag=false;
    for(char x:s){
        if(x=='7'){
            flag=true;
        }
    }

    if(flag) cout<<"Lucky"<<endl;
    else cout<<"Not Lucky"<<endl;
    return 0;
}