#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    vector<ll> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    
	    ll gcd=0;
	    for(int i=0;i<n-1;i++){
	        ll d=v[i+1]-v[i];
	       gcd=__gcd(gcd,d);
	    }
	    
	    ll ans=0;
	    for(int i=0;i<n-1;i++){
	        ll k=((v[i+1]-v[i])/gcd)-1;
	        ans+=k;
	      
	    }
	    
	   cout<<ans<<endl;
	    
	    
	}

}
