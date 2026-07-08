#include<bits/stdc++.h>;
using namespace std;
#define ll long long

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
       
        queue<ll> q;
        stack<ll> st;
        for (int i = 0; i < n; i++)
        {
            ll x; cin>>x;
            q.push(x);
        }

        ll total=0;


        while (!q.empty())
        {
            if(st.empty()){
              ll top=q.front();
              st.push(top);
              q.pop();
            }

            if(!st.empty()&&st.top()>q.front()){
              ll r=st.top()-q.front();
              total+=r;
              q.pop();
            }
            else{
                st.push(q.front());
                q.pop();
            }

            
        }

        cout<<total<<endl;
        
        
    }
    
    return 0;
}