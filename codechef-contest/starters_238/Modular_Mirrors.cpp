#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        if((n-2)%3==0){
            vector<int> v;
           if(m%2==0){
             int first=m/2;
           
            for (int i = 1; i <= n; i++)
            {
                if(i%3==0){
                    v.push_back(0); 
                    
                }
                else{
                 v.push_back(first);
            }
        }
           }else{
            int first=m/2;
            int second=first+1;
           
            int cnt=0;
            for (int i = 1; i <= n; i++)
            {
                if(i%3==0){
                    v.push_back(0); 
                    cnt++;
                }
                else{
                if(cnt%2==0){
                 v.push_back(second);
                }else{
                    v.push_back(first);
                }
            }
        }
            
           }
       
           for (auto x:v)
           {
             cout<<x<<" ";
           }
           
        cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    
    return 0;
}