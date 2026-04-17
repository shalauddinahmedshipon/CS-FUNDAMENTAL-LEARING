#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n;
    cin>>n;
    map<string,int> mp;
    while (n--)
    {
        string s;
        cin>>s;
        if(mp.find(s)==mp.end()){
            mp[s]=0;
            cout<<"OK"<<endl;
        }else{
           auto it = mp.find(s);
           string str=it->first;
           string nb;
           for(char x:str){
             if(int(x)>=48&&int(x)<=57){
                nb.push_back(x);
             }
           }

           if(nb.empty()){
            auto it=mp.find(s);
            string s1=it->first;
            mp[s]++;
            s1.append(to_string(it->second));
           
            cout<<s1<<endl;
           }else{
            int added=stoi(nb)+1;
            string s2=to_string(added);
            str.append(s2);
            mp[str]++;
            cout<<str<<endl;

           }
        }
        
    }
    
    return 0;
}