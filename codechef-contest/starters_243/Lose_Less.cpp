#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int m,n;
        cin>>m>>n;
        if(m>=n){
           cout<<m-n<<endl;
        }
        else{
            int tmp=0,winCnt=1;

            while(tmp<n){
              tmp=winCnt*3+(m-winCnt);
              if(tmp>=n) break;
              else{
                winCnt++;
                tmp=0;
              }
            }

            int ans= tmp-n;
            cout<<ans<<endl;
        }
    }
    
    return 0;
}