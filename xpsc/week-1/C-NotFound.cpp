#include<bits/stdc++.h>;
using namespace std;

int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vector<int> frq(26);
     for (int i = 0; i <s.size(); i++)
    {
       frq[s[i]-97]++;
    }

    bool flag=false;
     for (int i = 0; i <26; i++)
    {
      if(frq[i]==0){
         cout<<char(i+97);
         flag=true;
         break;
      }
      
    }

    if(!flag) cout<<"None"<<endl;

    
    
    
    return 0;
}