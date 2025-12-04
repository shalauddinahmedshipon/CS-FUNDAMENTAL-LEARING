#include<bits/stdc++.h>;
using namespace std;

int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    bool isExist=false;
    while (ss>>word)
    {
       if(word=="Jessica"){
        isExist=true;
       } 
    }
    if(isExist){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}