#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n,k; cin>>n>>k;
	    int r=k-n;
	    if(r<1){
	        cout<<0<<endl;
	    }else{
	        cout<<r*2<<endl;
	    }
	}

}
