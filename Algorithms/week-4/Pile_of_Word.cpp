#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       string a,b;
       cin>>a>>b;
       if(a.size()!=b.size()){
        cout<<"NO"<<endl;
       }else{

        map<char,int> m1;
        for (int i = 0; i <a.size(); i++)
        {
            auto it=m1.find(a[i]);
            if(it==m1.end()){
                m1[a[i]]=1;
            }else{
                m1[a[i]]=it->second+1;
            }
        }

         map<char,int> m2;
         for (int i = 0; i <b.size(); i++)
         {
            auto it=m2.find(b[i]);
            if(it==m2.end()){
                m2[b[i]]=1;
            }else{
                m2[b[i]]=it->second+1;
            }
        }
        
        
        bool flag=true;

        for (auto it:m1)
        {
          auto l=m2.find(it.first);
          if(l==m2.end()){
            flag=false;
          }else{
            if(it.second!=l->second){
                flag=false;
            }
          }
        }
        
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }


       }
       
    }
    
    return 0;
}