#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> v;
        set<int>st;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
            st.insert(x);
        }
        
       int i=0,j=n-1;

       while (1)
       {
        int mn=*st.begin();
        int mx=*st.rbegin();
        int flag=0;

        if(mn==v[i]||mx==v[i]){
            st.erase(v[i]);
            i++;
            flag=1;
        }
        if(mn==v[j]||mx==v[j]){
            st.erase(v[j]);
            j--;
            flag=1;
        }

       if(flag==0||i>j) break;
       
       }
       
       if(i>j){
        cout<<-1<<endl;
       }
       else{
         cout<<i+1<<" "<<j+1<<endl;
       }
      
      
        
        
    }
    return 0;
}