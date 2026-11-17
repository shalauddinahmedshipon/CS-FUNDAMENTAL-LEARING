#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n,d; cin>>n>>d;

        int c1=0,c2=0,c3=0;
        vector<int> s1(n),s2(n),ans;
        for (int i = 0; i < n; i++)
        {
            cin>>s1[i];
            c1+=s1[i];
        }
         c1+=d;

        for (int i = 0; i < n; i++)
        {
            cin>>s2[i];
            c2+=s2[i];
        }
        c2+=d;

        for (int i = 0; i < n; i++)
        {
            c3+=min(s1[i],s2[i]);
        }

        c3+=(2*d);


        ans.push_back(c1);
        ans.push_back(c2);
        ans.push_back(c3);

        sort(ans.begin(),ans.end());

        cout<<ans[0]<<endl;

        
    }
    
    return 0;
}