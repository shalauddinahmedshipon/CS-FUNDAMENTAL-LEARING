#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
       
        queue<char> q;
        for (char x:s)
        {
           q.push(x);
        }

        stack<char> st;

        while (!q.empty())
        {
            char x=q.front();
            q.pop();
            if(!st.empty()&&st.top()==x){
                st.pop();
            }else{
                st.push(x);
            }
        }
        
        cout<<st.size()<<endl;
    }
    
    return 0;
}