#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int frq[26]={0};
    string newStr;
    for (int i = 0; i < s.size(); i++)
    {
      frq[int(s[i])-97]++;
     

    }
    for (int i = 0; i <26; i++)
    {
        if(frq[i]==1){
         newStr.push_back(char(i+97));
        }
     
    }
    bool hasUniq=false;
    char unique;

    for (int i = 0; i <s.size(); i++)
    {
        if(hasUniq){
            break;
        }

        for (int j = 0; j <newStr.size(); j++)
        {
            if(s[i]==newStr[j]){
                 unique=s[i];
                 hasUniq=true;
              break;
            }

         
          
        }

        }
        
   if(hasUniq){
    cout<<unique;
   }else{
    cout<<"-1";
   }
   
    return 0;
}