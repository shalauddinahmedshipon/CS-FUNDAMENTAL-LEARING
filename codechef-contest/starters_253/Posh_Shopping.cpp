#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    vector<int> v(n);
	    int mx=0;
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        mx=max(mx,v[i]);
	    }
	    
	    int mx2=0;
	     for(int i=0;i<n-1;i++){
	        for(int j=i+1;j<n;j++){
	            if(v[i]<=v[j]){
	                mx2=max(mx2,(v[i]+v[j]));
	            }
	        }
	    }
	    
	    if(mx>=mx2) cout<<mx<<endl;
	    else cout<<mx2<<endl;
	}

}
