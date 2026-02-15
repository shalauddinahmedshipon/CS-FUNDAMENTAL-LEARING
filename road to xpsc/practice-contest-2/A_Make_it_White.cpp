#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       string s;
       cin>>s;
       int minIdx=0;
       int maxIdx=0;
       bool isMinIdxCount=false;
      

       for (int i = 0; i <n; i++)
       {
        if(s[i] =='B'){
            maxIdx=i;
            if(!isMinIdxCount){
                minIdx=i;
                isMinIdxCount=true;
            }     
        }
       }
       
       cout<<(maxIdx-minIdx+1)<<endl;
    
    }
    
    return 0;
}