#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        stack<char> s;
        for (int i = 0; i < n; i++)
        {
            char ch;
            cin>>ch;
            if(s.empty()||s.top()!=ch){
                s.push(ch);
            }else{
                s.pop();
            }
        }
        
       if(s.empty()) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
        
    }
    
    return 0;
}