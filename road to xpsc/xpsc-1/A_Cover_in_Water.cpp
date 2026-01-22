#include<bits/stdc++.h>
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
        int con=0;
        int count=0;
        for(char x:s){
            if(x=='.'){
                count++;
                con++;
                if(con==3){
                    break;
                }
            }else{
                con=0;
            }
        }

       if(con==3) cout<<"2"<<endl;
       else cout<<count<<endl;

    }
    
}