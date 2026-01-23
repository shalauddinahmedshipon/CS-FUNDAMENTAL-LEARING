#include<bits/stdc++.h>;
using namespace std;

int main(){
    long long int n,c;
    cin>>n>>c;
    long long int d=c/n;
    long long int r=c%n;
    cout<<d<<" "<<r;
    return 0;
}