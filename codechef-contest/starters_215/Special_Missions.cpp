#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int t; cin>>t;
	while(t--){
	    int n,c; cin>>n>>c;
	    vector<int> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    string s; cin>>s;
	    
	    ll total=0;
	    bool pay=false;
	    ll sp=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='0'){
	            total+=v[i];
	        }
	    }
	    
	    for(int i=0;i<n;i++){
	        if(s[i]=='1'){
	            sp+=v[i];
	        }
	    }
	    
	    if(total>=c&&c<sp){
	        cout<<total+sp-c<<endl;
	    }
	    else cout<<total<<endl;
	    
	    
	   
	}

}
