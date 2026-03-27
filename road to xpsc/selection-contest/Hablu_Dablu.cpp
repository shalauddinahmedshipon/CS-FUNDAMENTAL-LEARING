#include<bits/stdc++.h>;
using namespace std;

int main(){
    long long int n,h;
    cin>>n>>h;
   
    vector<long long int> v;
    for (long long int i = 0; i < n; i++)
    {
        long long int x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());
   
      long long int large=v[v.size()-1];
      long long int sum=0;

      for (long long int i = large-1; i >= 0; i--)
      {
       sum+=i;
      }

   
      
    if(sum>=h){
        cout<<"Dablu"<<endl;
    }else{
        cout<<"Hablu"<<endl;
    }
    
    return 0;
}