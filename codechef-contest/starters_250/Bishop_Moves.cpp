#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
        int const1=y1-x1,const2 =x1+y1;
        if(x2+y2==const2||y2-x2==const1){
            cout<<1<<endl;
        }
        else{
            if((x1+y1)%2==(x2+y2)%2){
                cout<<2<<endl;
            }
            else cout<<-1<<endl;
        }
    }
    
    return 0;
}