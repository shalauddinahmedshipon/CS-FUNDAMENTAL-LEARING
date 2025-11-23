#include<bits/stdc++.h>;
using namespace std;

int main(){
    char s[100001];
    while (cin.getline(s,100001))
    {
    
        int lenStr=strlen(s);
        sort(s,s+lenStr);
        int countSpace=0;
        for(int i=0;i<lenStr;i++){
            if(s[i]==32){
               countSpace++;
            }
        }
        for(int i=countSpace;i<lenStr;i++){
           cout<<s[i];
        }
       cout<<endl; 
    }
    
    
    
    return 0;
}