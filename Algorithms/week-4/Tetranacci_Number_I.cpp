#include<bits/stdc++.h>;
using namespace std;

long long int tetranacci(long long int n){
if(n==0) return 0;
if(n==1||n==2) return 1;
if(n==3) return 2;
return tetranacci(n-4)+tetranacci(n-3)+tetranacci(n-2)+tetranacci(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<tetranacci(n);
    return 0;
}