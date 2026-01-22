#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        int res=0;
        int sy=y%2==0?(y/2):(y/2)+1;
        int r=y%2==0?(7*sy):(7*(sy-1))+11;
        if(x<=r){
         res=sy;
        }
        else{
          int eb=(x-r);
          int sx=eb%15==0?(eb/15):(eb/15)+1;
          res=sy+sx;
        }

        cout<<res<<endl;
    }
    
    return 0;
}