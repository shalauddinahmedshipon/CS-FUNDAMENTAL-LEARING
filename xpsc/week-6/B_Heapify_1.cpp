#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
         int n;
         cin>>n;
         vector<int> v1(n+1),v2(n+1);
         v1[0]=0;v2[0]=0;
         for (int i = 1; i <= n; i++)
         {
           
           cin>>v1[i]; 
           v2[i]=v1[i];
         }

         sort(v2.begin(),v2.end());

         for (int l = 1; l <=18; l++)
         {
           for (int i = 1; i <=(n/2); i++)
           {
            if(v1[i]>v1[2*i]){
                int a=v1[i];
                v1[i]=v1[2*i];
                v1[2*i]=a;
            }
           }
         }
         
         

         bool flag=true;

         for (int i = 1; i <=n; i++)
         {
            if(v1[i]!=v2[i]){
                flag=false;
                break;
            }
         }

         if(flag) cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
         
         
         
    }
    
    return 0;
}