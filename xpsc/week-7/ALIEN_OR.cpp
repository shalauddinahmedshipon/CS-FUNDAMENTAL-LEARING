#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<string> v(n);
        for(auto &i:v) cin>>i;
        string exist(k,'0');

        string ans="YES";
        for (int i = 0; i < k; ++i)
        {
            int flag =0;
            exist[i]='1';
            for(auto s:v){
                if(s==exist){
                    flag=1;
                    break;
                }
            }
            if(flag){

            }else{
                  ans="NO";
            }
           
            exist[i]='0';
        }

        cout<<ans<<endl;
        
    }
    return 0;
}