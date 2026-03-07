#include<bits/stdc++.h>;
using namespace std;

int par[100005];
int group_size[100005];

int find_leader(int node){
if(par[node]==-1) return node;
int leader=find_leader(par[node]);
par[node]=leader;
return leader;
}

void dsu_union(int nodeA,int nodeB){
int leaderA=find_leader(nodeA);
int leaderB=find_leader(nodeB);
if(group_size[leaderA]>=group_size[leaderB]){
par[leaderB]=leaderA;
group_size[leaderA]+=group_size[leaderB];
}else{
par[leaderA]=leaderB;
group_size[leaderB]+=group_size[leaderA];
}
}


int main(){

    memset(par,-1,sizeof(par));
    memset(group_size,1,sizeof(group_size));

    int n,e;
    cin>>n>>e;
    int cnt=0;
    while (e--)
    {
       int a,b;
       cin>>a>>b;
       int leaderA=find_leader(a);
       int leaderB=find_leader(b);
       if(leaderA==leaderB){
        cnt++;
       }else{
        dsu_union(a,b);
       }
    }
    

    cout<<cnt<<endl;

    return 0;
}