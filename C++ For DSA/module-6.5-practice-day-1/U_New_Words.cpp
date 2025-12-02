#include<bits/stdc++.h>;
using namespace std;

int main(){
    string str;
    cin>>str;
    int frq[26]={0};
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        int idx=tolower(ch)-'a';
        frq[idx]++;
    }
    int res=min({frq['e'-'a'],frq['g'-'a'],frq['y'-'a'],frq['p'-'a'],frq['t'-'a']});
    cout<<res<<endl;
    return 0;
}