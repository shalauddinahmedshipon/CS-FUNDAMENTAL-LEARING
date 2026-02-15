#include<bits/stdc++.h>;
using namespace std;

int main(){
    int l,r;
    cin>>l>>r;
    string s;
    cin>>s;
    vector<char> v;

    for (int i = 0; i <s.size(); i++)
    {
        if(i>=l-1&&i<=r-1){
            v.push_back(s[i]);
        }
    }

    reverse(v.begin(),v.end());

    for (int i = 0; i <v.size(); i++)
    {
       s[i+l-1]=v[i];
    }

    cout<<s<<endl;

    
    return 0;
}