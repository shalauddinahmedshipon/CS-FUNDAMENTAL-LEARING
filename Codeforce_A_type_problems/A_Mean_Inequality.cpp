#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       vector<int> v;
       for (int i = 0; i < 2*n; i++)
       {
        int x;
        cin>>x;
        v.push_back(x);
       }

       sort(v.begin(),v.end());
       int i=0; 
       int j=2*n-1;
       int count=0;
       while (i<=j)
       {
        if(count%2==0){
         cout<<v[i]<<" ";
         i++;
        }else{
         cout<<v[j]<<" ";
         j--;
        }
        count++;
       }
       
       cout<<endl;
       
    }
    
    return 0;
}