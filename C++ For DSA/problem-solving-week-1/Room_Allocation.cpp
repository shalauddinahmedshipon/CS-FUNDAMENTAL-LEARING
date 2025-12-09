#include<bits/stdc++.h>;
#include<cmath>;
using namespace std;

int main(){
    int t ;
    cin>>t;
    while (t--)
    {
      int cn;
      cin>>cn;
      if(cn<2){
        float tm;
        cin>>tm;
        if(tm<=2){
            cout<<1<<endl;
        }else{
            int res=ceil(tm/2);
            cout<<res<<endl;
        }
      }else{
        int sum=0;
        for(int i=1;i<=cn;i++){
        float tm;
        cin>>tm;
         if(tm<=2){
            sum+=1;
        }else{
            int res=ceil(tm/2);
            sum+=res;
        }

        }
        cout<<sum<<endl;
      }
    }
    
    return 0;
}