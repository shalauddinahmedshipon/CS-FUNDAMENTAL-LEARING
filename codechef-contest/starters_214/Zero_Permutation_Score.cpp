#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    n-=3;
	    int ans=0;
	    while(n>0){
	        ans+=n;
	        n-=2;
	    }
	    
	    cout<<ans<<endl;
	}

}
