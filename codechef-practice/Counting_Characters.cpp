#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cntA=0,cntB=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='a') cntA++;
            else cntB++;
        }

        cout<<cntA<<" "<<cntB<<endl;
        
    }
    return 0;
}