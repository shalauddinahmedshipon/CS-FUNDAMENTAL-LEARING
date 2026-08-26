#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    vector<int> v(n);
	    int neg=0;
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        neg+=v[i];
	    }
	    if(neg>=0){
	        cout<<0<<endl;
	    }
	    else{
	        int x=(abs(neg)+(n-1))/n;
	        cout<<x<<endl;
	    }
	}

}
