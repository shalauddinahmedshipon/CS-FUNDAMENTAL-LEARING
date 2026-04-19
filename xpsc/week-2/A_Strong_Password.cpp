#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string pass;
        cin>>pass;
        queue<char> q;
        stack<char> st;
        for (int i = 0; i <pass.size(); i++)
        {
           q.push(pass[i]);
        }

        int cnt=0;
        while(!q.empty()){
           if(st.empty()){
            st.push(q.front());
            q.pop();
           }else{
            if(q.front()==st.top()&&cnt==0){
                char ch;
              if(q.front()+1>=97&&q.front()+1<=122){
                 ch=q.front()+1;
              }
              if(q.front()-1>=97&&q.front()-1<=122){
                 ch=q.front()-1;
              }
              st.push(ch);
              cnt++;

            }else{
                st.push(q.front());
                q.pop();
            }
           }
        }
        
        stack<char> st1;
        while(!st.empty()){
            st1.push(st.top());
            st.pop();
        }

        if(pass.size()==st1.size()){
          char x;
            if(st1.top()+1>=97&&st1.top()+1<=122){
               x=st1.top()+1;
            }
            if(st1.top()-1>=97&&st1.top()-1<=122){
               x=st1.top()-1;
            }
            st1.push(x);   
        }
        if(st1.size()!=1){
          while (!st1.empty())
        {
           cout<<st1.top(); 
           st1.pop();
        }
        }else{
            char x;
            if(st1.top()+1>=97&&st1.top()+1<=122){
               x=st1.top()+1;
            }
            if(st1.top()-1>=97&&st1.top()-1<=122){
               x=st1.top()-1;
            }
            cout<<x<<st1.top();
            st1.pop();
        }
       
        
        cout<<endl;
    }
    

    return 0;
}