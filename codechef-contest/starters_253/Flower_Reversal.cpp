#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    string s; cin>>s;
	    int ans=0,seg=1;
	    for(int i=1;i<n;i++){
	        if(s[i]==s[i-1]) ans++;
	        else seg++;
	    }
	    
	    if(seg<=2){
	        cout<<ans<<endl;
	    }
	    else if(seg==3){
	        cout<<ans+1<<endl;
	    }
	    else cout<<ans+2<<endl;
	}

}
