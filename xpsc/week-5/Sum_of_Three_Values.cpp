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

     vector<int> tp(3);


    for (int i = 0; i < n-2; i++)
    {
       int tar=s-v[i].first;
       int j=i+1,k=n-1;
        while (j<k)
     {
        if(v[j].first+v[k].first==tar){
            tp={v[i].second,v[j].second,v[k].second};
            flag=true;
            break;
        }
        else if(v[j].first+v[k].first<tar){
            j++;
        }
        else if(v[j].first+v[k].first>tar){
            k--;
        }
     }
      
    }
    

     

    sort(tp.begin(),tp.end());

     if(flag) cout<<tp[0]<<" "<<tp[1]<<" "<<tp[2]<<endl;
     else cout<<"IMPOSSIBLE"<<endl;
     
     
    return 0;
}