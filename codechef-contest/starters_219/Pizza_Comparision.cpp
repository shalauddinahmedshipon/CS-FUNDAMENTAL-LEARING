#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        float a,b; cin>>a>>b;
        float x=a/(100);
        float y=b/(225);
        if(x>y){
            cout<<"large"<<endl;
        }
        else if(y>x){
            cout<<"small"<<endl;
        }
        else{
            cout<<"equal"<<endl;
        }
    }
    
    return 0;
}