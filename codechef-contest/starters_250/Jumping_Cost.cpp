#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        int i=0,j=1,sum=0,ans=0;
        while (j<n)
        {
            if(v[j]>0){
                sum+=v[j];
                int currAns=sum-(j)+(i);
                ans=max(ans,currAns);
            }
            j++;
        }

        cout<<ans<<endl;
        
    }
    return 0;
}

