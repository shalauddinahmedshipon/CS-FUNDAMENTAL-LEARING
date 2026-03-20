#include<bits/stdc++.h>;
using namespace std;


void printNum(string n,int i){
if(i==n.size()) return;
cout<<n[i]<<" ";
printNum(n,i+1);
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       printNum(to_string(n),0);
       cout<<endl;
    }
    
    return 0;
}