#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
   double p;
    cin>>p;
    if(p==0){
        cout<<'0';
        return 0;
    }
   double com= (p*20)/100;
   double res=100/com;
   if(res<1){
    cout<<1;
   }else{
    cout<<ceil(res);
   }
   
    return 0;
}