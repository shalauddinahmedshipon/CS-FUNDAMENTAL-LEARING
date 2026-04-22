#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
             int x;
             cin>>x;
             v.push_back(x);
        }

        int sum=0;

        for (int i = 0; i < n; i++)
        {
             
                int cntL=0;
                int cntR=0;

             for (int j = 0; j < i; j++)
             {
                if(v[j]<v[i]) cntL++;
             }

             for (int k = i+1; k < n; k++)
             {
               if(v[k]>v[i]) cntR++;
             }

             if(cntL==cntR){
                sum++;
             }
             
        }
        
        cout<<sum<<endl;
    }
    
    return 0;
}