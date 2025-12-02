#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while (t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
       int frq[26]={0};
       int sum=0; 
       for(int i=0;i<n;i++){
        int idx=str[i]-'A';
        if(frq[idx]==0){
          frq[idx]++;
          sum+=2;
        }else{
           frq[idx]++;
           sum+=1; 
        }
        
       }

       cout<<sum<<endl;
    }
    
    return 0;
}