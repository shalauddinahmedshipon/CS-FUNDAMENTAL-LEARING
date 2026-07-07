#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(s[0]=='0'){
            cout<<"NO"<<endl;
        }
        else{

            queue<char> q;
            for (int i = 0; i < n; i++)
            {
             q.push(s[i]);   
            }

            int swp=k;

            while (!q.empty())
            {
                if(q.front()=='0'){
                    if(swp==0){
                        break;
                    }
                    swp--;
                }
                else{
                    swp=k;
                }

                q.pop();
            }

            if(q.empty()){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
            

            
        }
    }
    return 0;
}