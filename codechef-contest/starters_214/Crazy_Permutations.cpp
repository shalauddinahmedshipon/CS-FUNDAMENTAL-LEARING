#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	     vector<int> a(n),b(n);
	     for(int i=0;i<n;i++){
	         cin>>a[i];
	     } 
	     for(int i=0;i<n;i++){
	         cin>>b[i];
	     } 
	     
	     bool flag=true;
	     for(int i=0;i<n-1;i++){
            if(a[i]<a[i+1]&&b[i]>b[i+1]){
                flag=false;
                break;
            }
            if(a[i]>a[i+1]&&b[i]<b[i+1]){
                flag=false;
                break;
            }
	     }
	     
	     if(flag) cout<<"Yes"<<endl;
	     else cout<<"No"<<endl;
	}

}
