#include<bits/stdc++.h>
using namespace std;

int main(){
      double h,w; cin>>h>>w;
  
    double bmi=w/(h*h);

    bmi=bmi*(10000);
 
   
    if(bmi>=25) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}