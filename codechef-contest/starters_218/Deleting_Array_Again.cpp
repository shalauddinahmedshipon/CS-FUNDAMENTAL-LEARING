#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    vector<int> v(n),c(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    
	    for(int i=0;i<n;i++){
	        cin>>c[i];
	    }
	    
	    int sum=0;
	    for(int i=n-1;i>=0;i--){
	        int mn=INT_MAX;
	        for(int j=0;j<=i;j++){
	            int el=v[i]*c[j];
	            mn=min(mn,el);
	        }
	        sum+=mn;
	    }
	    
	    cout<<sum<<endl;
	    
	}

}
