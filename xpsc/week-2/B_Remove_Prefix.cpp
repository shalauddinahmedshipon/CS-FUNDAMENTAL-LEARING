// #include<bits/stdc++.h>;
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         vector<int> v;
//         for (int i = 0; i < n; i++)
//         {
//            int x;
//            cin>>x;
//            v.push_back(x);
//         }

//         reverse(v.begin(),v.end());
//         map<int,int> mp;
//         for(int x:v){
//             if(mp.find(x)!=mp.end()){
//                 break;
//             }
//             mp[x]++;
//         }

//         cout<<n-mp.size()<<endl;
        
//     }
    
//     return 0;
// }

#include<bits/stdc++.h>;
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        reverse(v.begin(),v.end());

        int unique=0;
        map<int,int> mp;
        for(auto num:v){
            if(mp.find(num)==mp.end()){
                unique++;
                mp[num]++;
            }else{
                break;
            }
        }

        int ans=n-unique;
        cout<<ans<<endl;

       
        
    }
    
    return 0;
}