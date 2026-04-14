#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        stack<int> cap,sm;
        for (int i = 0; i < s.size(); i++)
        {
          if(s[i]>='a'&&s[i]<='z'&&s[i]!='b') sm.push(i);
          if(s[i]>='A'&&s[i]<='Z'&&s[i]!='B') cap.push(i);
          if(s[i]=='b'){
            if(!sm.empty()){
               s[sm.top()]='0';
            sm.pop();
            }
            
          }
          if(s[i]=='B'){
            if(!cap.empty()){
               s[cap.top()]='0';
            cap.pop();
            }
        }
        
      
       }


       for(auto ch:s){
          if(ch!='0'&&ch!='b'&&ch!='B'){
                 cout<<ch;
          }
       }
       
       
       cout<<endl;
       

    }
    
    return 0;
}