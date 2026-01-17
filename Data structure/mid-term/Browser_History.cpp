#include<bits/stdc++.h>;
using namespace std;

int main(){
    list<string> ls;
    string line;
    getline(cin,line);
    stringstream ss(line);
    string word;

    while (ss >> word)
    {   
        
       if(word != "end" ){
        ls.push_back(word);
       }
      
    }

    int q;
    cin>>q;
    while (q--)
    {
        
    }
    

    for (int i = 0; i <ls.size(); i++)
    {
        cout<< *next(ls.begin(),i) <<endl;
    }
    
    
    return 0;
}