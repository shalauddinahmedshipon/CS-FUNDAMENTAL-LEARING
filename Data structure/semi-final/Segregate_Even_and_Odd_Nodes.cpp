#include<bits/stdc++.h>;
using namespace std;

int main(){
    int n;
    cin>>n;
    list<int> ls;
    for (int i = 0; i < n; i++)
    {
       int val;
       cin>>val;
       ls.push_back(val);
    }

    list<int> ls2;

     for (int i = 0; i < n; i++)
    {
        int val=*next(ls.begin(),i);
     if(val%2==0){
        ls2.push_back(val);
     }
    }

     for (int i = 0; i < n; i++)
    {
        int val=*next(ls.begin(),i);
     if(val%2!=0){
        ls2.push_back(val);
     }
    }


    for (int i = 0; i < n; i++)
    {
      cout<<*next(ls2.begin(),i)<<" ";
    }


    
    return 0;
}