#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int n,m;
       cin>>n>>m;
       string s;
       cin>>s;
       int frq[7]={0};
       for(char x:s){
           frq[x-'A']++;
       }
       int total=0;
       for(int i=0;i<7;i++){
        if(frq[i]<m)
        total+=m-frq[i];
       }

       cout<<total<<endl;


    }
    
    return 0;
}