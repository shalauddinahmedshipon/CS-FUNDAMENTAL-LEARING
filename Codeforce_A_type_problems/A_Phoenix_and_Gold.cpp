#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int n,l;
       cin>>n>>l;
       vector<int> v;
       for (int i = 0; i < n; i++)
       {
        int x;
        cin>>x;
        v.push_back(x);
       }
       vector<int> r;
       vector<int> w;
       int sum=0;

       for(int x:v){
        if(sum+x==l){
         w.push_back(x);
        }else{
         r.push_back(x);
         sum+=x; 
        }
       }
       
       for (int x:w)
       {
        r.push_back(x);
        sum+=x;
       }
       

       if(sum==l){
        cout<<"NO"<<endl;
       }else{
        cout<<"YES"<<endl;
        for (int x:r)
        {
           cout<<x<<" ";
        }
        
       }
      cout<<endl;
    }
    
    return 0;
}