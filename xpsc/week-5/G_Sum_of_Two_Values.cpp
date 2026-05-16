#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n,s;
     cin>>n>>s;
     vector<pair<int,int>> v;
     for (int i = 0; i < n; i++)
     {
        int x;
        cin>>x;
        v.push_back({x,i+1});
     }

   

     sort(v.begin(),v.end());

   
     bool flag =false;

     pair<int,int> p;
     int l=0,r=n-1;

     while (l<r)
     {
        if(v[l].first+v[r].first==s){
            p={v[l].second,v[r].second};
            flag=true;
            break;
        }
        else if(v[l].first+v[r].first<s){
            l++;
        }
        else if(v[l].first+v[r].first>s){
            r--;
        }
     }
     

     if(flag) cout<<min(p.first,p.second)<<" "<<max(p.first,p.second)<<endl;
     else cout<<-1<<endl;
     
     
    return 0;
}