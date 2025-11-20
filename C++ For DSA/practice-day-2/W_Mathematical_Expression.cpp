#include<bits/stdc++.h>;
using namespace std;

int main(){
    int a;
    cin>>a;
    char s;
    cin>>s;
    int b;
    cin>>b;
    char q;
    cin>>q;
    int c;
    cin>>c;

    if(s=='+'){
      if(a+b==c){
        cout<<"Yes"<<endl;
      }else{    
        cout<<a+b<<endl;
      }
    }
    else if(s=='-'){
      if(a-b==c){
        cout<<"Yes"<<endl;
      }else{    
        cout<<a-b<<endl;
      }
    }
    else if(s=='*'){
      if(a*b==c){
        cout<<"Yes"<<endl;
      }else{    
        cout<<a*b<<endl;
      }
    }
    


    return 0;
}