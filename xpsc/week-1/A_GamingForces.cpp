#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for (int i = 0; i <n; i++)
        {
            int h;
            cin>>h;
            v.push_back(h);
        }

        int cnt1=0;
         
        for(int x:v){
            if(x==1){
                cnt1++;
            }
        }

        int res=0;
        if(cnt1%2==0){
            res=cnt1/2;
        }else{
            res=(cnt1/2)+1;
        }

         for(int x:v){
            if(x>1){
                res++;
            }
        }

        cout<<res<<endl;
        
    }
    return 0;
}