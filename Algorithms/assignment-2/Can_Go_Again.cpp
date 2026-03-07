#include<bits/stdc++.h>
using namespace std;

class Edge{
 public:
 long long int a,b,c;
 Edge(long long int a,long long int b,long long int c){
   this->a=a;
   this->b=b;
   this->c=c;
 }
};
int n,e;
long long int dis[1005];
vector<Edge> edge_list;
bool flag=false;

void bellman_ford(){
  for (int i = 1; i < n; i++)
  {
    for (auto ed:edge_list)
    {
       long long int a,b,c;
        a=ed.a;
        b=ed.b;
        c=ed.c;
        if(dis[a]!=LLONG_MAX&&dis[a]+c<dis[b]){
            dis[b]=dis[a]+c;
        }
    }
    
  }

  for (auto ed:edge_list)
    {
       long long int a,b,c;
        a=ed.a;
        b=ed.b;
        c=ed.c;
        if(dis[a]!=LLONG_MAX&&dis[a]+c<dis[b]){
           flag=true;
        }
    }
  
}

int main(){
    cin>>n>>e;
   

    while (e--)
    {
       long long int a,b,c;
        cin>>a>>b>>c;
        edge_list.push_back(Edge(a,b,c));
    }

    for (int i = 1; i <=n; i++)
    {
       dis[i]=LLONG_MAX;
    }
    
    long long int s;
    cin>>s;
    dis[s]=0;

    bellman_ford();

    if(flag){
        cout<<"Negative Cycle Detected"<<endl;
    }else{
       int t;
       cin>>t;
       while (t--)
       {
        long long int d;
        cin>>d;
        if(dis[d]==LLONG_MAX){
            cout<<"Not Possible"<<endl;
        }else{
            cout<<dis[d]<<endl;
        }
       }
       
    }
    
    
    return 0;
}






// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,e;
//     cin>>n>>e;
//     long long int adj_mat[n+5][n+5];

//     for (int i = 1; i <=n; i++)
//     {
//        for (int j = 1; j <=n; j++)
//        {
//         if(i==j) adj_mat[i][j]=0;
//         else adj_mat[i][j]=LLONG_MAX;
//        }
       
//     }

//     while (e--)
//     {
//        int a,b;
//        cin>>a>>b;
//        long long int c;
//        cin>>c;
//        adj_mat[a][b]=min(adj_mat[a][b],c);

//     }
    

//     for (int k = 1; k <= n; k++)
//     {
//       for (int i = 1; i <=n; i++)
//     {
//        for (int j = 1; j <=n; j++)
//        {
       
//         if(adj_mat[i][k]!=LLONG_MAX&&adj_mat[k][j]!=LLONG_MAX&& adj_mat[i][k]+adj_mat[k][j]<adj_mat[i][j]){
//             adj_mat[i][j]=adj_mat[i][k]+adj_mat[k][j];
//         }
//        }
       
       
//     }  
//     }
    

//     bool flag=false;
//     for (int i = 1; i <=n; i++)
//     {
//        if(adj_mat[i][i]<0){
//         flag=true;
//        }
//     }

//     if(flag){
//         cout<<"Negative Cycle Detected"<<endl;
//     }else{

//      int s,t;
//      cin>>s>>t;
     
//      while (t--)
//      {
//        int d;
//        cin>>d;
//        if(adj_mat[s][d]==LLONG_MAX){
//          cout<<"Not Possible"<<endl;
//        }else{
//         cout<<adj_mat[s][d]<<endl;
//        }
//      }
     

//     }
    
   
    

//     return 0;
// }
