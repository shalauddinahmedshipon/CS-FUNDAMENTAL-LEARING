#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n;
    cin>>n;
    int sp=0;

    if(n>2){
        sp=n-2;
    }

    for (int i = 1; i <=n; i++)
    {
        if(i==1){
            for(int j = 1; j <= n; j++)
            {
               cout<<j;
            }
            
        }
        else if(i==n){
            for (int k = n; k>0; k--)
            {
                cout<<k;
            }
            
        }
        else{
            cout<<i;
            for (int m = 1; m<= sp; m++)
            {
                cout<<" ";
            }
            cout<<n-(i-1);
            
        }
        cout<<endl;
    }
                         
    return 0;
}