#include<bits/stdc++.h>;
using namespace std;

int main(){
    string s; cin>>s;
    int n=s.size();
    map<char,int> mp;
    for(int i=0;i<n;i++){
       mp[s[i]]++;
    }

   

    bool flag=true;
    
  
    if(n%2==0){
       for(auto it:mp){
          if(it.second%2==1){
             flag=false;
             break;
          }
       }

    }
    else{
       int cnt=0;
       for(auto it:mp){
          if(it.second%2==1){
             if(cnt>1){
             flag=false;
             break;
             }
             cnt++;
          }
       }
    }


    if(!flag){
        cout<<"NO SOLUTION"<<endl;
    }
    else{

    vector<char> pal(n);
    int i=0,j=n-1;

    char ch;
     for(auto it:mp){
         if(it.second%2==0){
            int t=it.second/2;
            while(t--){
             pal[i]=it.first;
             pal[j]=it.first;
             i++; j--;
            }
         }
         else{
            ch=it.first;
              it.second--;
               int t=it.second/2;
             while(t--){
             pal[i]=it.first;
             pal[j]=it.first;
             i++; j--;
            }
         }
     }

       if(n%2==1){
          pal[n/2]=ch;
       }
   

      for(auto ch:pal){
        cout<<ch;
      }

      cout<<endl;
    }

    return 0;
}