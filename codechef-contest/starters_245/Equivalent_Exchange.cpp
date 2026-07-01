#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n,k; cin>>n>>k;
        vector<int> v(n);
        
        for (int i = 0; i <n ; i++)
        {
           cin>>v[i]; 
        }


        bool flag=false;

       for (int i = 0; i <= k; i++)
       {
        int red=i,blue=k-i;

        for (int i = 0; i < n; i++)
        {
            if(v[i]>0){
              red+=v[i];
              blue-=v[i];
            }
            else{
              blue+=(-(v[i]));
              red-=(-(v[i])); 
            }

            if(red<0||blue<0){
               break;
            }
           
        }

        if(red>=0&&blue>=0){
               flag=true;
               break;
        }
        

       }

       if(flag) cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
       
        
    }
    
    return 0;
}