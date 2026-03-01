#include<bits/stdc++.h>;
using namespace std;
  
class Solution {
  public:
  
int dis[105];
  
vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
    vector<pair<int,pair<int,int>>> edge_list;
   for(auto v:edges){
       int a,b,c;
       a=v[0]; b=v[1]; c=v[2];
       edge_list.push_back({a,{b,c}});
   } 
   
for(int i=0;i<V;i++){
     dis[i]=100000000;
   } 
   
   dis[src]=0;
   
for(int i=0;i<V-1;i++){
    for(auto v:edge_list){
     int a,b,c;
     a=v.first;
     b=v.second.first;
     c=v.second.second;
     if(dis[a]!=100000000&&dis[a]+c<dis[b]){
         dis[b]=dis[a]+c;
     }
   } 
}

bool cycle =false;       
 for(auto v:edge_list){
     int a,b,c;
     a=v.first;
     b=v.second.first;
     c=v.second.second;
     if(dis[a]!=100000000&&dis[a]+c<dis[b]){
        cycle=true;
     }
      
   } 
   
   vector<int> res;
   
   if(cycle){
       vector<int> v;
       v.push_back(-1);
    return v;
   }
   else{
   for(int i=0;i<V;i++){
     res.push_back(dis[i]);
   } 
   }
  
 return res;
    }
    
    
    
    
    
};
