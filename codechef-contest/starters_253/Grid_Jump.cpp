#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int a,b,p,q,r; cin>>a>>b>>p>>q>>r;
	    int ans=INT_MAX;
	    for(int i=0;i<=min(a,b);i++){
	        int x=(a-i+1)/2,y=(b-i+1)/2;
	        int cost=(x*p)+(y*q)+(i*r);
	        ans=min(ans,cost);
	    }
	    cout<<ans<<endl;
	}

}
