#include<bits/stdc++.h>;
using namespace std;

int main(){
    int b,r; cin>>b>>r;

    int remove_b= 30*b;
    int remove_r= (30-b)*r;
    int total_remove = remove_b + remove_r;
    int ans = 900-total_remove;
    cout<<ans<<endl;
    return 0;
}