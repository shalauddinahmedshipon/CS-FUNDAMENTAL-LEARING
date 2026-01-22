#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<char> v={'a','e','i','o','u'};
        int i=0;
        string s;
        while (n--)
        {
          if(i==5) i=0;
           s+=v[i];
           i++;
        }

        sort(s.begin(),s.end());

        cout<<s<<endl;
        
    }
    
    return 0;
}