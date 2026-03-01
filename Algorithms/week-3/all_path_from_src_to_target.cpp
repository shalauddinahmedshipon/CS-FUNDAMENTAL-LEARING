#include<bits/stdc++.h>;
using namespace std;

class Solution {
public:
    vector<vector<int>> v;
    vector<int> p;
    int n;

    void dfs(int src,vector<vector<int>>& graph){
        p.push_back(src);
        if(src==n-1){
            v.push_back(p);
        }
        for(auto child:graph[src]){        
                dfs(child,graph);
        }
        p.pop_back();
       
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        n=graph.size();
        dfs(0,graph);
        return v;
    }

};