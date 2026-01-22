#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       int arr[n];
       map<int,int> mp;

       for (int i = 0; i < n; i++)
       {
         cin>>arr[i];
         mp[arr[i]]++;
       }
       vector<int> v;
       if(mp.size()>2){
        cout<<"NO"<<endl;
       }else{
         if(mp.size()==2){
           for (auto x:mp)
           {
            v.push_back(x.second);
           }
           if(abs(v[0]-v[1])>1){
            cout<<"NO"<<endl;
               
           }else{
           cout<<"YES"<<endl;
           }
           
         }else{
           cout<<"YES"<<endl; 
         }
       }
       

    }
    
    return 0;
}