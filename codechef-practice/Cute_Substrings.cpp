#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

       int ans=0;
       for (int len = 1; len <=n; len++)
       {
           for (int pos = 0; pos < n; pos++)
           {
             if(pos+len>n) break;
             string target = s.substr(pos,len);
             
               bool cute = true;
             if(target.size()%2==0){
                cute=false;
             }
             else{
              
                for (int i = 0; i < target.size(); i++)
                {
                    if(i%2==0){
                        if(target[i]=='o' or target[i]=='u'){
                            continue;
                        }else{
                            cute=false;
                        }
                    }
                    else{
                       if(target[i]=='w'){
                            continue;
                        }else{
                            cute=false;
                        } 
                    }
                }
                
             }

             if(cute){
              ans=max(ans,len);
             }
           }
         
           
       }
       
        cout<<ans<<endl;
    
        
    }
    return 0;
}