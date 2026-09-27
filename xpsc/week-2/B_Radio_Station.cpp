// #include<bits/stdc++.h>;
// using namespace std;

// int main(){
//     int n,m;
//     cin>>n>>m;
//     map<string,string> mp;
//     vector<pair<string,string>> v2;
//     for (int i = 0; i < n; i++)
//     {
//         string a,b;
//         cin>>a>>b;
//         mp[b]=a;
//     }

//     for (int i = 0; i < m; i++)
//     {
//         string a,b;
//         cin>>a>>b;
//         v2.push_back({a,b});
//     }

//     for(auto it:v2){
//        string str=it.second;
//         str.pop_back();
//        cout<<it.first<<" "<<it.second<<" #"<<mp[str]<<endl;
//     }

    
    
//     return 0;
// }

#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n,m; cin>>n>>m;
    map<string,string> mp;
    for (int i = 0; i < n; i++)
    {
        string name,ip;
        cin>>name>>ip;
        ip=ip.append(";");
        mp[ip]=name;
    }

     for (int i = 0; i < m; i++)
    {
        string command,ip;
        cin>>command>>ip;
        cout<<command<<" "<<ip<<" "<<"#"<<mp[ip]<<endl;
    }


    
    return 0;
}