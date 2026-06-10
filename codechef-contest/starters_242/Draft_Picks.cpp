#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        map<int,int> mp;
 
        bool flag =true;

        while (k!=0)
        {
           
          if(flag){
            for (int i = 0; i < n; i++)
            {
                if(k==0) break;
                if(mp.find(i)==mp.end()){
                    mp[i]=k;
                }else{
                   int sum=mp[i]+k;
                   mp[i]=sum;
                }
                k--;
                if(i==n-1) flag=false;
            }
            
          }
          else{
             for (int i = n-1; i >= 0; i--)
            {
                if(k==0) break;
               if(mp.find(i)==mp.end()){
                    mp[i]=k;
                }else{
                   int sum=mp[i]+k;
                   mp[i]=sum;
                }
                k--;
                if(i==0) flag=true;
            }
          } 
        }
       
        cout<<mp.begin()->second<<endl;

    }
    
    return 0;
}