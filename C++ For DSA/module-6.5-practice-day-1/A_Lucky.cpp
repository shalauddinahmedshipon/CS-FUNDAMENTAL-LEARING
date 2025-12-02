#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
         string str;
         cin>>str;
         int sumA=0;
         int sumB=0;
         for(int i=0;i<6;i++){
            if(i<3){
            sumA=sumA+str[i]-'0';
            }else{
            sumB=sumB+str[i]-'0';
            }
          
         }

         if(sumA==sumB){
            cout<<"YES"<<endl;
         }else{
            cout<<"NO"<<endl;
         }
    }
    
   
    
    return 0;
}