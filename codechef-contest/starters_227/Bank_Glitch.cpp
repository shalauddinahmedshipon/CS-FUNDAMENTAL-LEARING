#include<bits/stdc++.h>;
using namespace std;

int main(){
   int t; cin>>t;
   while (t--)
   {
    int a,b,x,y; cin>>a>>b>>x>>y;
    if(a>=x){
      int sum=0,sub=a;
      int i=1;
      while ((i*x)<=a)
      {
        sum+=y;
        sub-=x;
        i++;
      }

      cout<<sum+sub+b<<endl;
      
    }
    else{
        cout<<a+b<<endl;
    }
   }
   
    return 0;
}