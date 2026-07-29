#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int q; cin>>q;

    while (q--)
    {
        int x; cin>>x;
        auto smallerIt= lower_bound(v.begin(),v.end(),x);
        int smallPos= smallerIt-v.begin()-1;
        int smallValue=v[smallPos];

        auto higherIt= upper_bound(v.begin(),v.end(),x);
        int higherPos=higherIt-v.begin();
        auto higherValue=v[higherPos];

        if(smallPos>=0&&higherIt!=v.end()){
          cout<<smallValue<<" "<<higherValue<<endl;
        }
        else if(smallPos<0&&higherIt==v.end()){
          cout<<'X'<<" "<<'X'<<endl;
        }
        else if(smallPos<0){
          cout<<'X'<<" "<<higherValue<<endl;
        }
        else if(higherIt==v.end()){
            cout<<smallValue<<" "<<'X'<<endl; 
        }
       
        

    }
    
    
    return 0;
}