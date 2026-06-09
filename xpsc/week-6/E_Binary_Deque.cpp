#include<bits/stdc++.h>;
using namespace std;



int main(){
    int t;
    cin>>t;
    while (t--)
    {
         int n,s;
         cin>>n>>s;
         vector<int> v(n);
         int sum=0;
         for (int i = 0; i < n; i++)
         {
            cin>>v[i];
            sum+=v[i];
         }

        

         if(sum<s){
            cout<<"-1"<<endl;
         }
         else if(sum==s){
            cout<<0<<endl;
         }else{
         
        int l=0,r=0,mxL=0,k=0;

        while (r<n)
         {
            
              k+=v[r];       
        
             if(k>s){
             while (k>s&&l<r)
             {
                k-=v[l];
                l++;
             }
             
            }
           
            if(k==s){
             mxL=max(mxL,r-l+1);
            }

            r++;
            
         }
           
       cout<<(n-mxL)<<endl; 
            
         }

        
         


         
         
    }
    
    return 0;
}