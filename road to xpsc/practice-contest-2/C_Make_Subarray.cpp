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
        
       
       queue<int> q;

       for (int i = 0; i < n; i++)
       {
   
        q.push(s[i]-48);
       }

       stack<int> st;
       st.push(0);
       int count =0;
       int total=0;

       while (!q.empty())
       {
        if(q.front()==1 && st.top()==0){
            st.push(q.front());
            q.pop();
        }

        else if(q.front()==0&&st.top()==1){
             count++;
             q.pop();
        }

        else if(q.front()==1&&st.top()==1){
            total+=count;
            count=0;
            q.pop();
        }

        else if(q.front()==0&&st.top()==0){
             q.pop();
        }

       }
       
       cout<<total<<endl;

   
    }
    
    return 0;
}