#include<bits/stdc++.h>;
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    bool flag=false;
    for (int i = 1; i <=b; i++)
    {
      int ans=c*i;
      if(ans>=a&&ans<=b){
        cout<<ans<<endl;
        flag=true;
        break;
      }
    }

    if(!flag) cout<<-1<<endl;
    
    return 0;
}