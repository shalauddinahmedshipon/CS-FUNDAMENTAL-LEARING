#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v1(n) ,v2(n);
        for (int i = 0; i <n; i++)
        {
            cin>>v1[i];
            v2[i]=v1[i];

        }

        sort(v2.begin(),v2.end());

        if(v1==v2) cout<<n<<endl;
        else{
            cout<<1<<endl;
        }
        
    }
    
    return 0;
}