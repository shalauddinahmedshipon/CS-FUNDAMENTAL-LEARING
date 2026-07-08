#include<bits/stdc++.h>;
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
       
        queue<pair<ll,ll>> q1;
        stack<pair<ll,ll>> st1;
        vector<pair<int,int>> v1,v2;
       
        for (int i = 0; i < n; i++)
        {
            ll x; cin>>x;
            v1.push_back({x,i});
            q1.push({x,i});
        }

         while (!q1.empty())
        {
            if(st1.empty()){
              pair<ll,ll> top=q1.front();
              st1.push(top);
              q1.pop();
            }

            if(!st1.empty()&&st1.top()>q1.front()){
              v2.push_back({st1.top()});
              st1.pop();
              q1.pop();
            }
            else{
                st1.push(q1.front());
                q1.pop();
            }

            
        }

        
        sort(v2.begin(),v2.end());
       
        if(v2.size()){

        pair<int,int> mx={v2[v2.size()-1].first,v2[v2.size()-1].second};
       
        v1[mx.second]={v1[mx.second+1].first, v1[mx.second].second};
        }
       

         queue<ll> q2;
        
         for (int i = 0; i < n; i++)
        {     
            // cout<<v1[i].first<<" ";     
            q2.push(v1[i].first);
        }

    //    cout<<endl;
        stack<ll> st2;

        ll total=0;


        while (!q2.empty())
        {
            if(st2.empty()){
              ll top=q2.front();
              st2.push(top);
              q2.pop();
            }

            if(!st2.empty()&&st2.top()>q2.front()){
              ll r=st2.top()-q2.front();
              total+=r;
              q2.pop();
            }
            else{
                st2.push(q2.front());
                q2.pop();
            }

            
        }

        cout<<total<<endl;
        
        
    }
    
    return 0;
}