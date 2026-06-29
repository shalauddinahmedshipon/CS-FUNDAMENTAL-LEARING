#include<bits/stdc++.h>;
using namespace std;
#define ll long long

int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll> divisors;
    for (int i = 1; i <=sqrt(n); i++)
    {
        if(n%i==0){
            divisors.push_back(i);
            if(n/i!=i){
                divisors.push_back(n/i);
            }
        }

      
    }

      sort(divisors.begin(),divisors.end());

      
        if(divisors.size()<k) cout<<-1<<endl;
        else cout<<divisors[k-1]<<endl;
    
    return 0;
}