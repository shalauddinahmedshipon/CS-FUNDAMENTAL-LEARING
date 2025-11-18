#include<bits/stdc++.h>;
using namespace std;

int main(){
    char ch;
    cin>>ch;
    if(int(ch)>47 && int(ch)<58){
        cout<<"IS DIGIT"<<endl;
    }else{
        cout<<"ALPHA"<<endl;
        if(int(ch)>64&&int(ch)<92){
        cout<<"IS CAPITAL"<<endl;
        }else{
         cout<<"IS SMALL"<<endl;
        }
    }
    // cout<<ch;
    return 0;
}