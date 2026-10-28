#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        string s; cin>>s;
        int last_index=n;
        for (int i = n-1; i >= 0; i--)
        {
            if(s[i]=='1'){
                last_index=i;
                break;
            }
        }

        int cnt=0;
        int r=last_index;
        int l=r-k;

        while (l>=0)
        {
           bool is1Exist=false;
            int j=k;
             while (j--)
             {
                 if(r<0){
                break;
                }
                if(s[r]=='1'){
                  is1Exist=true;
                }
                r--;
             }

             if(is1Exist){
                cnt++;
                is1Exist=false;
             }

             l-=k;
            
             if(l<0){
                l=0;
             }
             
        }
        



       if(n==1&&s[0]==1){
        cnt=1;
       }
       else if(n==1&&s[0]==0){
        cnt=0;
       }
       cout<<cnt<<endl;
       
        
         


        
    }
    return 0;
}