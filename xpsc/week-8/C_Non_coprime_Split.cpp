#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int l,r; cin>>l>>r;
        
        bool flag=false;
        
        int a=1,b=1;

       

        for (int n = l; n <= r; n++)
        {
             for (int i = 2; i <= sqrt(n); i++)
             {
                if(n%i==0){
                    if(i>1){
                        flag=true;
                        a=i; b=n-i;
                        break;
                    }
                }
             }

             if(flag) break;
             
        }

        if(a==1&&b==1){
            cout<<-1<<endl;
            continue;
        }

        cout<<a<<" "<<b<<endl;
        
       
    }
    return 0;
}