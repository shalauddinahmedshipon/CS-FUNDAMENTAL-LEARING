#include<bits/stdc++.h>;
using namespace std;

 int main(){
    long long int n;
    cin>>n;
    vector<long long int> v;
    for (long long int i = 0; i < n; i++)
    {
       long long int x;
       cin>>x;
       v.push_back(x);
    }


    long long int mv=0;
    for (long long int i = 1; i < n; i++)
    {
      if(v[i]<v[i-1]){
        while (v[i]!=v[i-1])
        {
           v[i]++;
           mv++;
        }
        
      }
    }

    cout<<mv<<endl;
    
    return 0;
}