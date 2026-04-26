#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        multiset<int> ml;
        for (int i = 1; i <=n; i++)
        {
            ml.insert(i);
        }

        vector<pair<int,int>> v;

        for(int i=1;i<n;i++){
            auto a=ml.end();
            a--;
            auto b=--ml.end();
            b--;
            
            if(*a%2==0&&(*b)%2!=0) b--;
            if(*a%2==1&&(*b)%2!=1) b--;

            
            int c=(*a+*b)/2;
            v.push_back({*b,*a});
            
            ml.erase(*a);
            ml.erase(*b);

            ml.insert(c);    
            
        }

        cout<<2<<endl;

        for(auto it:v){
            cout<<it.first<<" "<<it.second<<endl;
        } 
       
       
        
    }
    return 0;
}