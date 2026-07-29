#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    int q; cin>>q;
    
    while (q--)
    {
        int lval,rval; cin>>lval>>rval;


        int startingPos=-1,l=0,r=n-1;
       
        while (l<=r)
        {
           int mid=(r+l)/2;
           if(v[mid]>=lval){
             r=mid-1;
             startingPos=mid;
           }
           else{
             l=mid+1;
           }
        }

        int endingPos=-1; 
        l=0,r=n-1;
        
        while (l<=r)
        {
           int mid=(r+l)/2;
           if(v[mid]<=rval){
             l=mid+1;
             endingPos=mid;
           }
           else{
             r=mid-1;
           }
        }
        
       
        int dis=endingPos-startingPos+1;

         if(startingPos==-1) dis=0;

        cout<<dis<<" ";

    }
    
    return 0;
}