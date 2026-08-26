#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    vector<int> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    int mn=INT_MAX;
	    for(int i=0;i<n-1;i++){
	        int cost=v[i]+v[i+1];
	        mn=min(mn,cost);
	    }
	    
	    cout<<mn<<endl;
	}

}
