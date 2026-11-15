#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        if(n==1||n==2||n==3){
            cout<<-1<<endl;
        }else{
            if(n%2==0){
                int x=n;
                while (x)
                {
                    cout<<x<<" ";
                    x--;
                }
                cout<<endl;
            }
            else{
                vector<int> ans;
                int x=n-1,y=n;
                int t=(n-3)/2;
                while (t--)
                {
                    ans.push_back(x);
                    ans.push_back(y);
                    x-=2;
                    y-=2;
                }

                ans.push_back(2);
                ans.push_back(1);
                ans.push_back(3);

                for(int x:ans){
                    cout<<x<<" ";
                }

                cout<<endl;
                
            }
        }
    }
    return 0;
}