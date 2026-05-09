#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<long long int> v1,v2,res;
    for(int i=0;i<n;i++){
        long long int x;
        cin>>x;
        v1.push_back(x);
    }
    for(int i=0;i<m;i++){
        long long int x;
        cin>>x;
        v2.push_back(x);
    }

    int l=0,r=0,cnt=0;

    while (r<m)
    {
       if(l<n&&v1[l]<v2[r]){
        l++;
        cnt++;
       }else{
        res.push_back(cnt);
        r++;
       }
    }

     for(int i=0;i<m;i++){
        cout<<res[i]<<" ";
    }
    
    cout<<endl;
    return 0;
}