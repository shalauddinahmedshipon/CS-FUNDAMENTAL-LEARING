#include<bits/stdc++.h>;
using namespace std;

int main(){
    string s;
    int idx;
    cin>>s;
    cin>>idx;
    string ns;
    for (int i = 0; i <s.size(); i++)
    {
       if(int(s[i])>=50&&int(s[i])<=57){
       for (int j = 1; j <int(s[i])-48; j++)
       {
        ns.push_back(s[i-1]);
       }
       
       }else{
        ns.push_back(s[i]);
       }

    }

    cout<<ns[idx-1];
    
    
    return 0;
}