#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n,e;
    cin>>n>>e;

    vector<int> arr[n];

    while (e--)
    {
       int a,b;
       cin>>a>>b;
       arr[a].push_back(b);
       arr[b].push_back(a);
    }

    int q;
    cin>>q;
    while (q--)
    {
        int x;
        cin>>x;
        vector<int> v;
        if(arr[x].size()==0){
          cout<<"-1"<<" ";
        }else{
         for (int i = 0; i <arr[x].size(); i++)
        {
           v.push_back(arr[x][i]);
        }

        sort(v.begin(),v.end(),greater<>());

        for(int x:v){
            cout<<x<<" ";
        }
        }
        
       cout<<endl; 
    }
    
    

    return 0;
}