#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
       string s;
       getline(cin,s);
       stack<char> st;
       for(char x:s){
        if(st.empty()){
            st.push(x);
        }else{
            if((x=='0'&&st.top()=='1')||x=='1'&&st.top()=='0'){
               st.pop(); 
            }else{
                st.push(x);
            }
        }
       }

    if(st.empty()){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }


    }

    
    
    return 0;
}