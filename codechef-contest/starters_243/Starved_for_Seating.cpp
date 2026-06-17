#include<bits/stdc++.h>;
using namespace std;

int main(){
    int q;
    cin>>q;
    while(q--){
        int t,s;
        cin>>t>>s;
        vector<int> v(t);
        int sum=0;

        for (int i = 0; i < t; i++)
        {
            cin>>v[i];
            sum+=v[i];
           
        }

      

        if(sum<=s) cout<<0<<endl;
        else{
            int cnt=0;

            for (int i = 0; i < t-1; i++)
            {
                for (int j = i+1; j < t; j++)
                {
                    int a=v[i]+v[j];
                    int b=(sum-a)/2;
                    int res=a+b;
                    if(res>s) cnt++;
                }
                
            }
            
            cout<<cnt<<endl;

        }

        
    }
    return 0;
}