#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int r=n/2;
	     int ans=0;
	     if(n%2==0){
	         ans=r*30;
	     }
	     else{
	         ans=(r*30)+20;
	     }
	     
	     cout<<ans<<endl;
	}

}
