#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        
        int score=0;
        for (int i = 0; i <= n; i++)
        {
            if(i%2==0){
                score+=i;
            }
        }  
        cout<<score<<endl;

        
    }
    
    return 0;
}