#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int x,y,z; cin>>x>>y>>z;
	    int l=x-y,r=x+y;
	    int zl=x-z,zr=x+z;
	    int a=max(l,zl),b=min(r,zr);
	    int ans=b-a;
	    cout<<ans<<endl;
	}

}
