#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n;
    cin>>n;
    long long int sum=0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
       sum+=x;
    }

     int r=0;
    if(sum%2==0){
    r=abs(sum)/2;
    }else{
        r=abs(sum)/2 +1;
    }
    
    cout<<r<<endl;
    
    return 0;
}