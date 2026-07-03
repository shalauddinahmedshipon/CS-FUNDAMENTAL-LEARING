#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,x;cin>>n>>x;
        string s1,s2,s3;
        int cnt1=x,cnt0=(3*n)-x;

        while (n--)
        {
            if(cnt0>=2&&cnt1>=1){
                s1.push_back('0');
                s2.push_back('0');
                s3.push_back('1');
                cnt0-=2; cnt1--;
            }
            else if(cnt0>=3){
                s1.push_back('0');
                s2.push_back('0');
                s3.push_back('0');
                cnt0-=3;
            }
            else if(cnt0>=1){
                s1.push_back('1');
                s2.push_back('1');
                s3.push_back('0');
                cnt0--; cnt1-=2;
            }
            else{
                s1.push_back('1');
                s2.push_back('1');
                s3.push_back('1');
                cnt1-=3;
            }
        }

        cout<<s1<<s2<<s3<<endl;
        
    }
    
    return 0;
}