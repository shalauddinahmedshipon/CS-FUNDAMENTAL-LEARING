#include<bits/stdc++.h>;
using namespace std;
#define ll long long


ll ans=2e18;
void rec(ll pos,vector<ll> &original, vector<ll> &grp1, vector<ll> &grp2){
if(pos>=original.size()){
    ll sum1=0,sum2=0;
    for(auto i:grp1) sum1+=i;
    for(auto i:grp2) sum2+=i;

    ans=min(ans,abs(sum1-sum2));
    return;
}


grp1.push_back(original[pos]);
rec(pos+1,original,grp1,grp2);
grp1.pop_back();

grp2.push_back(original[pos]);
rec(pos+1,original,grp1,grp2);
grp2.pop_back();

}
int main(){
    int n; cin>>n;
    vector<ll> a(n);
    for(auto &i:a) cin>>i;

    vector<ll> grp1,grp2;

    rec(0,a,grp1,grp2);

    cout<<ans<<endl;
    return 0;
}