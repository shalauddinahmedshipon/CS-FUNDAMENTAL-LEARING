#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int r,b,g;
	    cin>>r>>b>>g;
        vector<int> v(3);
        v[0]=r; v[1]=b;v[2]=g;
        sort(v.begin(),v.end());
	    int mn=v[0];
	    int p=mn*10;
	    int ans=0;
	    
	    if(mn==r){
	        ans=((b-mn)+(g-mn))*3+p;
	    }
	    else if(mn==b){
	        ans=((r-mn)+(g-mn))*3+p;
	    }
	    else {
	        ans=((r-mn)+(b-mn))*3+p;
	    }
	    
	    cout<<ans<<endl;
	}

}
