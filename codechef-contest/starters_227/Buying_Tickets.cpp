#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n,k; cin>>n>>k;
        vector<int> seats(n),available;
        for (int i = 0; i < n; i++)
        {
            cin>>seats[i];
        }

        string s;
        cin>>s;
        int cnt0=0;

       for (int i = 0; i < n; i++)
       {
        if(s[i]=='0'){
            available.push_back(seats[i]);
            cnt0++;
        }
       }

       if(cnt0<k){
        cout<<-1<<endl;
       }
       else{
        sort(available.begin(),available.end());
        int total=0;
        for(int i=0;i<k;i++){
            total+=available[i];
        }
        cout<<total<<endl;
       }
       
        
    }
    
    return 0;
}