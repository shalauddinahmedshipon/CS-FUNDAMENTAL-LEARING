#include<bits/stdc++.h>;
using namespace std;

long long int num;
bool reachValue(long long int val){
if(num==val){
    return true;
}
else if(num<val){
    return false;
}
else{
    return reachValue(val*10)||reachValue(val*20);
}
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        cin>>num;
        if(reachValue(1)){cout<<"YES"<<endl;} 
        else{cout<<"NO"<<endl;}
    }
    
    return 0;
}