#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        int op1=0,op2=0;

        for (int i = 0; i < n; i++)
        {
            if(i%2==0&&v[i]%2!=1){
                op1++;
            }

            if(i%2==1&&v[i]%2!=0){
                op1++;
            }     

        }

        for (int i = 0; i < n; i++)
        {
            if(i%2==0&&v[i]%2!=0){
                op2++;
            }

            if(i%2==1&&v[i]%2!=1){
                op2++;
            }     

        }

        cout<<min(op1,op2)<<endl;
        
    }
    
    return 0;
}