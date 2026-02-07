#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n;
    cin>>n;
    queue<string> q;

    cin.ignore();
    while (n--)
    {    
      string s;
      getline(cin,s);
      q.push(s);
    }

    queue<string> v;
    queue<string> r;

    while (!q.empty())
    {
       string s= q.front();
       stringstream ss(s);
       string word;
       vector<string> tmp(2);

       while (ss>>word)
       {
        cout<<word<<endl;
        // tmp.push_back(word);
       }

       cout<<tmp[0]<<tmp[1]<<endl;

    //    if(tmp[0]=="TYPE"){
    //      v.push(tmp[1]);
    //      if(!r.empty()) r.pop();
    //    }
    //    else if(tmp[0]=="UNDO"){
    //      r.push(v.back());
    //      v.pop();
    //    }
    //    else if(tmp[0]=="REDO"){
    //      v.push(r.back());
    //      r.pop();
    //    }

       
    }
    
    // while (!v.empty())
    // {
    //     cout<<v.front();
    // }
    
    return 0;
}