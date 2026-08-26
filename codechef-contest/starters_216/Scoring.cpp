#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int x,y; cin>>x>>y;
	    int alice,bob;
	    bob=(y-x)/2;
	    alice=bob+x;
	    cout<<alice<<" "<<bob<<endl;
	}

}
