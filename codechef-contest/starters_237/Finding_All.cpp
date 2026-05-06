#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        set<int> st;
        while (n--)
        {
            int x;
            cin>>x;
            st.insert(x);
        }

        if(st.size()==2){
            cout<<-1<<" "<<0<<endl;
        }
        else if(st.size()==3){
            cout<<0<<endl;
        }
        else if(st.size()==1){
            if(*st.begin()==0){
                cout<<0<<endl;
            }
            if(*st.begin()==1){
                cout<<-1<<endl;
            }
            if(*st.begin()==-1){
                cout<<1<<endl;
            }
        }
        
    }
    
    return 0;
}