#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int size=2*n;
        vector<int> v(size);
        for (int i = 0; i <size; i++)
        {
            cin>>v[i];
        }


        

        for (int i = 0; i <n; i++)
        {
            if(v[i]<v[(2*n)-(i+1)]){
                swap(v[i],v[(2*n)-(i+1)]);
            }
        }


        int sum=0;
         for (int i = 0; i <n; i++)
        {
           sum+=v[i];
        }


        cout<<sum<<endl;
        
    }
    
    return 0;
}