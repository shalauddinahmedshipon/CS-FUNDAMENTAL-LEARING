#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        string a,b;
        cin>>a>>b;
        if(a==b) cout<<0<<endl;
        else{
            vector<int> v1,v2;
            for (int i = 0; i < n; i++)
            {
                if(a[i]=='1') v1.push_back(i);
                if(b[i]=='1') v2.push_back(i);
            }

            if(v1.size()!=v2.size()) cout<<-1<<endl;
            else {
                int cnt=0;
                for (int i = 0; i < v1.size(); i++)
                {
                    if(v1[i]!=v2[i]) cnt++;
                }
                 cout<<cnt<<endl;
            }

              
            
        }
    }
    return 0;
}