// #include<bits/stdc++.h>;
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     map<string,int> mp;
//     for (int i = 0; i < n; i++)
//     {
//        string name;
//        cin>>name;
//        mp[name]=i;
//     }
    
//     vector<pair<int,string>> v;

//     for(auto it:mp){
//         v.push_back({it.second,it.first});
//     }

//     sort(v.begin(),v.end(),greater<pair<int,string>>());
//     for(auto item:v){
//        cout<<item.second<<endl;
//     }
    
//     return 0;
// }

#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n; cin>>n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        string s; cin>>s;
        v.push_back(s);
    }

    reverse(v.begin(),v.end());
    map<string,int> mp;

    for(auto s:v){
        if(mp.find(s)==mp.end()){
             cout<<s<<endl;
             mp[s]++;
        }
    }
    
    return 0;
}