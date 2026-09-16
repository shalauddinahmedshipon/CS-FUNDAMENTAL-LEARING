#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b; cin>>a>>b;
	int r=a+b;
	if(r%2==0){
	   int ans=(a-(r/2));
	   cout<<ans<<endl;
	}else{
	    cout<<-1<<endl;
	}

}
