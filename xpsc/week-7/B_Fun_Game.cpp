#include<bits/stdc++.h>;
using namespace std;

int main(){
    int q;
    cin>>q;
    while (q--)
    {
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        if(s==t){
            cout<<"YES"<<endl;
            continue;
        }

        int p=-1;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='1'){
                p=i;
                break;
            }
            
        }

    
        if(p!=-1){
  
         bool flag=true;
         for (int i = 0; i <p; i++)
         {
            if(s[i]!=t[i]){
                flag=false;
                break;
            }
         }
   
         if(flag) cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
         
        }else{
          cout<<"NO"<<endl;  
        }
        
    }
    
    return 0;
}