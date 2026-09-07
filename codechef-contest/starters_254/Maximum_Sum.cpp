#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n,k; cin>>n>>k;
	    vector<int> v(n),preSum(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    preSum[0]=v[0];
	    for(int i=1;i<n;i++){
            preSum[i]=v[i]+preSum[i-1];
	    }
	    
	    int rem=n-k;
	    int sum=preSum[rem-1];
	    int j=0;
	    for(int i=rem;i<n;i++){
	        int newSum=preSum[i]-preSum[j];
	        sum=max(sum,newSum);
	        j++;
	    }
    
	    
	    cout<<sum<<endl;
	}

}
